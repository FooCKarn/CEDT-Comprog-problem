#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<set<int>> sets;   
    string line;
    
    while (getline(cin, line)) {
        if (line.empty()) continue; 
        stringstream ss(line);
        int x;
        set<int> s;
        while (ss >> x) s.insert(x);
        sets.push_back(s);
    }

    if (sets.empty()) return 0;


    set<int> uni;
    for (auto &s : sets)
        uni.insert(s.begin(), s.end());


    set<int> inter = sets[0];
    for (int i = 1; i < (int)sets.size(); i++) {
        set<int> tmp;
        set_intersection(inter.begin(), inter.end(),
                         sets[i].begin(), sets[i].end(),
                         inserter(tmp, tmp.begin()));
        inter = tmp;
    }


    set<int> diff = sets[0];
    for (int i = 1; i < (int)sets.size(); i++) {
        set<int> tmp;
        set_difference(diff.begin(), diff.end(),
                       sets[i].begin(), sets[i].end(),
                       inserter(tmp, tmp.begin()));
        diff = tmp;
    }


    cout << "U: ";
    if (uni.empty()) cout << "empty set\n";
    else {
        for (auto it = uni.begin(); it != uni.end(); it++) {
            if (it != uni.begin()) cout << " ";
            cout << *it;
        }
        cout << "\n";
    }

    cout << "I: ";
    if (inter.empty()) cout << "empty set\n";
    else {
        for (auto it = inter.begin(); it != inter.end(); it++) {
            if (it != inter.begin()) cout << " ";
            cout << *it;
        }
        cout << "\n";
    }

    cout << "D: ";
    if (diff.empty()) cout << "empty set\n";
    else {
        for (auto it = diff.begin(); it != diff.end(); it++) {
            if (it != diff.begin()) cout << " ";
            cout << *it;
        }
        cout << "\n";
    }

}
