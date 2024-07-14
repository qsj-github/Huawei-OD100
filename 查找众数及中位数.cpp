#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main(){
    int n;
    while(cin>>n){
        v.push_back(n);
    }
    map <int,int> mp;
    for(auto i:v){
        mp[i]++;
    }
    
    int max_count=0;
    for(auto [key,value]:mp){
        if(value>max_count)  max_count=value;
    }
    
    vector <int> res;
    for(auto [key,value]:mp){
        if (value==max_count){
            res.push_back(key);
        }
    }
    std::sort(res.begin(), res.end());
    int m=res.size();
    if(m%2==1)  {
        cout<<res[m/2];
    }
    if(m%2==0){
        cout<<(res[m/2-1]+res[m/2])/2;
    }
    return 0;
}