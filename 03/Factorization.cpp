#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int N = n;
    bool c = true;
    string ans = "";
    int arr[100000] = {0};
    if(N>1e8){
        N = sqrt(N);
    }
    for(int i = 2;i<=N;i++){
        if(arr[i]==0){
            c = true;
            while(c){
                if(n%i==0){
                    ans += to_string(i);
                    ans += "*";
                    n /= i;
                }
                else {
                    c = false;
                }
            }

            for(int j = i+i;j<=N;j+=i){
                arr[j] == 1;
            }
        }
    }
    int l = ans.size();
    if(l>1){ans.erase(l-1,1);}
    cout<<ans;

}