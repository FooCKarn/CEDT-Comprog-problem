#include <bits/stdc++.h>
using namespace std;

int toDigit(string w){
    if(w=="soon") return 0;
    if(w=="neung" || w=="et") return 1;
    if(w=="song"  || w=="yi") return 2;
    if(w=="sam")  return 3;
    if(w=="si")   return 4;
    if(w=="ha")   return 5;
    if(w=="hok")  return 6;
    if(w=="chet") return 7;
    if(w=="paet") return 8;
    if(w=="kao")  return 9;
    return -1; 
}

int toUnit(string w){
    if(w=="sip")  return 10;        
    if(w=="roi")  return 100;       
    if(w=="phan") return 1000;      
    if(w=="muen") return 10000;     
    if(w=="saen") return 100000;    
    if(w=="lan")  return 1000000;   
    return 0;
}
long long convert(string line){
    stringstream ss(line);
    string w;
    long long total = 0;    
    long long part = 0;     
    int last = -1;          

    while(ss >> w){
        int d = toDigit(w);
        int u = toUnit(w);

        if(d!=-1){
            last = d; 
        }
        else if(u!=0){
            if(u==1000000){ 
                if(last!=-1){ part += last; last=-1; }
                if(part==0) part=1; 
                total += part*1000000;
                part=0;
            }
            else{
                if(w=="sip"){
                    if(last==-1) part+=10;     
                    else part+=last*10;
                }else{
                    if(last==-1) part+=u;      
                    else part+=last*u;
                }
                last=-1;
            }
        }
    }
    if(last!=-1) part+=last;
    return total+part;
}

int main(){
    string line;
    while(true){
        getline(cin,line);
        if(line=="q") break; 
        cout << convert(line) << "\n";
    }
}
