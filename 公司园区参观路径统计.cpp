#include <bits/stdc++.h>
using namespace std;

const int N=110;
int a[N][N];
int n,m,res=0;
void dfs(int x,int y){
    if(x==n&&y==m){
           res++;
           return ;
    }
    else{
           if (x + 1 <= n && a[x+1][y] == 0) { // 检查向下移动的路径
        dfs(x + 1, y);
    }
    if (y + 1 <= m && a[x][y+1] == 0) { // 检查向右移动的路径
        dfs(x, y + 1);
    }
    
}

}
int main() {

     cin>>n>>m;
     memset(a,0,sizeof(a));
     for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++){
             int x;
             cin>>x;
             a[i][j]=x;
         }
     }
     dfs(1,1);
     cout<<res;
     return 0;
}