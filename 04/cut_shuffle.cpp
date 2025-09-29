#include <bits/stdc++.h>
using namespace std;

void cut(vector<string>& vec){
    int half = vec.size()/2;
    vector<string> tmp;                 
    tmp.reserve(vec.size());
    tmp.insert(tmp.end(), vec.begin()+half, vec.end());
    tmp.insert(tmp.end(), vec.begin(), vec.begin()+half);
    vec.swap(tmp);
}

void shuffle(vector<string>& vec){
    int half = vec.size()/2;
    vector<string> tmp1(vec.begin(), vec.begin()+half);
    vector<string> tmp2(vec.begin()+half, vec.end());
    vector<string> last;
    last.reserve(vec.size());

    int L = tmp1.size();
    for(int i = 0; i < L; i++){
        last.push_back(tmp1[i]);
        last.push_back(tmp2[i]);
    }
    vec.swap(last);
}

int main(){
    int n; cin >> n;
    vector<string> vec;
    vec.reserve(n);
    for(int i = 0; i < n; i++){
        string tmp; cin >> tmp;
        vec.push_back(tmp);
    }
    string order; getline(cin >> ws, order);
    for(auto x : order){
        if(x == 'C')      cut(vec);
        else if(x == 'S') shuffle(vec);
    }
    for(auto &x : vec) cout << x << " ";
    return 0;
}
