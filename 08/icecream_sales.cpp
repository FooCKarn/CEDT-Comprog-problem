#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; 
    cin >> N;
    map<string,double> price;
    for(int i=0;i<N;i++){
        string name; double p;
        cin >> name >> p;
        price[name] = p;
    }

    int M; 
    cin >> M;
    map<string,double> revenue;  
    double total = 0.0;
    bool anyIceCreamSold = false;

    for(int i=0;i<M;i++){
        string item; long long qty;
        cin >> item >> qty;
        auto it = price.find(item);
        if(it != price.end() && qty > 0){
            double add = it->second * (double)qty;
            revenue[item] += add;
            total += add;
            anyIceCreamSold = true;
        }
    }

    if(!anyIceCreamSold){
        cout << "No ice cream sales\n";
        return 0;
    }

    double mx = 0.0;
    for(const auto &kv : revenue){
        mx = max(mx, kv.second);
    }

   vector<string> tops;
    for(const auto &kv : revenue){
    if(kv.second == mx){   
        tops.push_back(kv.first);
        }
    }


    cout << "Total ice cream sales: " << total << "\n";
    cout << "Top sales: ";
    for(size_t i=0;i<tops.size();++i){
        if(i) cout << ' ';
        cout << tops[i];
    }
    cout << "\n";
    return 0;
}
