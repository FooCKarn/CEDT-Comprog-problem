#include<bits/stdc++.h>
using namespace std;
int main(){
    int hr1,m1,s1,hr2,m2,s2;
    cin>>hr1>>m1>>s1;
    cin>>hr2>>m2>>s2;
    int sum1 = (hr1*3600)+(m1*60)+s1;
    int sum2 = (hr2*3600)+(m2*60)+s2;
    int sum3 = (sum2-sum1+86400)%86400;
    cout<<sum3/3600<<":"<<(sum3%3600)/60<<":"<<(sum3%3600)%60;
}