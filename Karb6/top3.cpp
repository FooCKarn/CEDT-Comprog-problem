#include<bits/stdc++.h>
using namespace std;
struct price{
    string id;
    double val;
    double sum;
    bool operator<(const price &x){
        return sum>x.sum;
    }
};
int main(){
    vector<price> vec;
    while(true){
        string id;
        double p;
        cin>>id;
        if(id=="END") break;
        cin>>p;
        vec.push_back({id,p,0.0});
    }
    string order;
    while(cin>>order){
        for(int i = 0;i<vec.size();i++){
            if(order == vec[i].id) vec[i].sum += vec[i].val;
        }
    }
    sort(vec.begin(),vec.end());
    int  cnt = 3;
    bool chk = false;
    for(int i = 0;i<vec.size();i++){
        if(cnt == 0) break;
        if(vec[i].sum!=0){
            cnt--;
            cout<<vec[i].id<<" "<<vec[i].sum<<endl;
            chk = true;
        }
    }
    if(!chk){
        cout<<"No Sales";
    }

}