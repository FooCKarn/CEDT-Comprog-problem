#include <bits/stdc++.h>
using namespace std;

int scoreOf(char c){
    if(c=='R') return 1;
    else if(c=='Y') return 2;
    else if(c=='G') return 3;
    else if(c=='N') return 4;
    else if(c=='B') return 5;
    else if(c=='P') return 6;
    else if(c=='K') return 7;
    return 0;
}

bool isColor(char c){
    return c=='R'||c=='Y'||c=='G'||c=='N'||c=='B'||c=='P'||c=='K';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    int T;
    if(!(cin >> T)) return 0;
    string line;
    getline(cin, line); 
    // ลำดับ Y -> G -> N -> B -> P -> K
    char tailOrder[6] = {'Y','G','N','B','P','K'};
    while(T--){
        getline(cin, line);
        long long sum = 0;
        bool ok = true;
        bool started = false; 
        bool lastWasR = false;  
        bool tailStarted = false;
        int  tailPos = 0;       
        for(int i=0;i<line.size()&&ok;i++){
            char c = line[i];
            if(c==' ') continue;
            if(!started){
                if(c!='R'){ ok=false; break; }
                sum += 1;         
                started = true;
                lastWasR = true;    
                continue;
            }
            if(!tailStarted){
                if(lastWasR){
                    if(c=='R'){ ok=false; break; }
                    sum += scoreOf(c);
                    lastWasR = false;
                }else{
                    if(c=='R'){
                        sum += 1;       
                        lastWasR = true;
                    }else if(c=='Y'){
                        sum += 2;        
                        tailStarted = true;
                        tailPos = 1;      
                    }else{
                        ok = false;
                    }
                }
            }else{
 
                if(tailPos >= 6){ ok=false; break; }    
                if(c != tailOrder[tailPos]){ ok=false; }
                else{
                    sum += scoreOf(c);
                    tailPos++;
                }
            }
        }
        if(!started) ok = false;
        if(ok) cout << sum << "\n";
        else   cout << "WRONG_INPUT\n";
    }
    return 0;
}
