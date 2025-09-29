#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char,string> T2Kmap = {
        {'a',"2"},   {'b',"22"},   {'c',"222"},
        {'d',"3"},   {'e',"33"},   {'f',"333"},
        {'g',"4"},   {'h',"44"},   {'i',"444"},
        {'j',"5"},   {'k',"55"},   {'l',"555"},
        {'m',"6"},   {'n',"66"},   {'o',"666"},
        {'p',"7"},   {'q',"77"},   {'r',"777"}, {'s',"7777"},
        {'t',"8"},   {'u',"88"},   {'v',"888"},
        {'w',"9"},   {'x',"99"},   {'y',"999"}, {'z',"9999"},
        {' ',"0"}
    };
    map<string,char> K2Tmap;
    for(auto &p:T2Kmap) K2Tmap[p.second]=p.first;

    string mode;
    while (cin >> mode){
        string line; getline(cin, line);
        if(!line.empty() && line[0]==' ') line.erase(line.begin());

        if (mode=="T2K"){
            vector<string> tokens;
            for(char c: line){
                c = tolower(static_cast<unsigned char>(c));
                if (T2Kmap.count(c)) tokens.push_back(T2Kmap[c]);
            }
            cout << ">> ";
            for (int i=0;i<tokens.size();++i){
                if (i) cout << ' ';
                cout << tokens[i];
            }
            cout << '\n';
        }
        else if (mode=="K2T"){
            stringstream ss(line);
            string t; string res;
            while (ss >> t){
                if (K2Tmap.count(t)) res += K2Tmap[t];
            }
            cout << ">> " << res << '\n';
        }
    }
    return 0;
}
