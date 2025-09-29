#include<bits/stdc++.h>
using namespace std;
struct s{
    string name;
    double vote;
    int man;
    double remain;
    bool operator<(const s &x){
       if(man!=x.man) return man>x.man;
       else return vote>x.vote;
    }
};
bool compare(s x1,s x2){
    return x1.remain>x2.remain;
}
int main(){
    vector<s> vec;
    double sum = 0;
    while(true){
        string name; cin>>name;
        if(name == "END" ) break;
        double k;cin>>k;
        sum += k;
        vec.push_back({name,k,0,0});
    }
    double avg = sum/100.0;
    int man_remain = 100;
    for(int i =0;i<vec.size();i++){
        double m = vec[i].vote/avg;
        int p = int(m); // amount of people
        man_remain -= p;
        double r =  vec[i].vote - (p*avg) ;
        vec[i].man = p;
        vec[i].remain = r;
    }
    if(man_remain>0){
        sort(vec.begin(),vec.end(),compare);
        int idx = 0;
        while(man_remain-->0){
            vec[idx].man++;
            idx++;
        }
    }
    
    sort(vec.begin(),vec.end());
    for(int i = 0;i<vec.size();i++){
        if(vec[i].man == 0) break;

        cout<<vec[i].name<<" "<<vec[i].man<<" "<<vec[i].vote<<endl;
    }

}
