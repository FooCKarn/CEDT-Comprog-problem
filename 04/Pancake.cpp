#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>& vec){
    for(auto x: vec){
        cout<<x<<" ";
    }
    cout<<endl;
}

void flip_pancake(vector<int>& vec,int r){
    reverse(vec.begin(),vec.begin()+r+1);
}

int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i = 0;i<n;i++) cin>>vec[i];

    printVec(vec);

    for(int last = n-1;last>0;last--){
        int idx_Max = max_element(vec.begin(),vec.begin()+last+1) - vec.begin(); 
        if(idx_Max == last) continue;

        if(idx_Max!=0){
            flip_pancake(vec,idx_Max);
            printVec(vec);
        }

        flip_pancake(vec,last);
        printVec(vec);
    }
}