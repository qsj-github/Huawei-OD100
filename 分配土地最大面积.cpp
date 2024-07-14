#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>> mp;



int main(){
   int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            if(mp.count(x)==0){
                mp[x]={i,i,j,j};
            }
            else{
                //更新边界
                mp[x][0]=min(mp[x][0],i);
                mp[x][1]=max(mp[x][1],i);
                mp[x][2]=min(mp[x][2],j);
                mp[x][3]=max(mp[x][3],j);
            }
        }
    }
    int ans=0;//初始化最小值
    for(auto [x,y]:mp){
        if(x!=0){
            ans=max(ans,(y[1]-y[0]+1)*(y[3]-y[2]+1));
        }
        
    }
    cout<<ans;
    return 0;
}