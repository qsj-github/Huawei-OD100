#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> res;
int main(){
    int x;
    while(cin>>x){
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(i==v.size()-1&&v[i]>v[0]){
            res.push_back(v[i]+v[0]);
            break;
        }
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
                res.push_back(v[i]+v[j]);
                break;
            }
            if(j==v.size()-1&&v[i]<v[j]){
                res.push_back(v[i]);
            }
        }
    }
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}