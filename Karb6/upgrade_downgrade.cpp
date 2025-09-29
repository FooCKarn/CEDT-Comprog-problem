#include<bits/stdc++.h>
using namespace std;
string upgrade(string k){
    if(k=="F") return "D";
    else if(k=="D") return "D+";
    else if(k=="D+") return "C";
    else if(k=="C") return "C+";
    else if(k=="C+") return "B";
    else if(k=="B") return "B+";
    else return "A";
}
string downgrade(string k){
    if(k=="A") return "B+";
    else if(k=="B+") return "B";
    else if(k=="B") return "C+";
    else if(k=="C+") return "C";
    else if(k=="C") return "D+";
    else if(k=="D+") return "D";
    else return "F";
}
struct stu{
    string id;
    string grade;
    int  val;
    bool operator<(const stu &x){
        return x.val < val;
    }
};
int cal(string k ){
    if(k=="A") return 7;
    else if(k=="B+") return 6;
    else if(k=="B") return 5;
    else if(k=="C+") return 4;
    else if(k=="C") return 3;
    else if(k=="D+") return 2;
    else if(k=="D") return 1;
    else return 0;

}
int main(){
    vector<stu> vec;
    int n;cin>>n;
   while (n--) {
    string id;
    cin >> id;
    if (id == "q") break; 
    string grade;
    cin >> grade;
    int k = cal(grade);
    vec.push_back({id,grade,k});
}

    string p;
    int test = 7;
    while(cin>>p){
        string o = p.substr(0,p.size()-1);
        for(int i = 0;i<vec.size();i++){
            if(o==vec[i].id){
                int t = p.size();
                if(p[t-1]=='+') {
                    vec[i].grade = upgrade(vec[i].grade);
                    vec[i].val = cal(vec[i].grade);
                }
                else{
                    vec[i].grade = downgrade(vec[i].grade);
                    vec[i].val = cal(vec[i].grade);
                }
            }
        }
    }
    sort(vec.begin(),vec.end());
    for(auto x:vec){
        cout<<x.id<<" "<<x.grade<<endl;
    }
}