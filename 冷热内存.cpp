#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
vector <pair<int,int>> pr;
int n,m,sum=0;

bool cmpare(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second)  return  a.first<b.first;
    return a.second<b.second;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    cin>>m;
    
  
    
    for(auto  pair:mp){
        if(pair.second>=m)  {
            sum++;
            pr.push_back(pair);
        }
    }
    
    cout<<sum<<endl;
     std::sort(pr.begin(),pr.end(),cmpare);
     for(auto  i:pr){
         cout<<i.first<<endl;
    }
    return 0;
}