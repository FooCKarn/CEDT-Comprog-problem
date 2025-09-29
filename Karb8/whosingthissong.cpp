#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); 
    map<string, vector<string>> mp;
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        int pos = line.find(", ");
        string song = line.substr(0, pos);
        string singer = line.substr(pos + 2);
        mp[song].push_back(singer);
    }

    string query;
    getline(cin, query);
    stringstream ss(query);
    string song;
    while (getline(ss, song, ',')) {
        if (!song.empty() && song[0] == ' ')
            song = song.substr(1);

        cout << song << " -> ";
        if (mp.count(song)) {
            for (int i = 0; i < (int)mp[song].size(); i++) {
                if (i) cout << ", ";
                cout << mp[song][i];
            }
        } else {
            cout << "Not found";
        }
        cout << "\n";
    }

    return 0;
}
