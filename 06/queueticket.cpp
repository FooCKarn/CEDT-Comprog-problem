#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 
    string cmd;
    int t,no;
    int current_t = 0;
    vector<pair<int,int>> vec;
    int cnt = 0,sum = 0;
    while (n--)
    {
        cin>>cmd;
        int cur_no,tmp;
        if(cmd == "reset"){
            cin>>no;
        }
        else if(cmd == "new"){
            cin>>t;
            cout<<">> ticket "<<no<<endl;
            vec.push_back({no,t});
            current_t = t;
            no++;
        }
        else if(cmd == "next"){
            cout<<">> call "<<vec[0].first<<endl;
            cur_no = vec[0].first;
            tmp = vec[0].second;
            vec.erase(vec.begin());
        }
        else if(cmd == "order"){
            cin>>t;
            cout<<">> qtime "<<cur_no<<" "<<t-tmp<<endl;
            cnt++;
            sum+=t-tmp;
        }
        else if(cmd == "avg_qtime"){
            double avg = double(sum)/double(cnt);
            cout<<">> avg_qtime "<<round(avg*100.0)/100.0 <<endl;
        }

    }
    
    
    return 0;
}
