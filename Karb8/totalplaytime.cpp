#include <bits/stdc++.h>
using namespace std;

using P =  pair<string, long long>;

bool compare(const P& a, const P& b){
    if (a.second != b.second) return a.second > b.second; 
    return a.first < b.first;                              
}

vector<P> sortByTotalDesc(const unordered_map<string,long long>& m){
    vector<P> v(m.begin(), m.end());
    sort(v.begin(), v.end(), compare);
    return v;
}

int main(){
    unordered_map<string,long long> sumSec;
    string title, artist, genre, timeStr;
    while (cin >> title >> artist >> genre >> timeStr){
        int p = timeStr.find(':');
        int mm = stoi(timeStr.substr(0, p));
        int ss = stoi(timeStr.substr(p + 1));
        sumSec[genre] += 1LL*mm*60 + ss;
    }

    auto v = sortByTotalDesc(sumSec);
    int k = min(3, (int)v.size());
    for (int i = 0; i < k; ++i){
        long long tot = v[i].second;
        cout << v[i].first << " --> " << (tot/60) << ":" << (tot%60) << "\n";
    }
}
