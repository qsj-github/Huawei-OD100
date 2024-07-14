#include <bits/stdc++.h>
using namespace std;

int max_val=0;

struct tree{
    int val;
    vector <tree*> branch;
};

int dfs(tree *t){
    int sum=0;
    if(t!=nullptr)      sum+=t->val;
    for(auto i:t->branch){
        sum+=i->val;
    }
    return sum;
}

int main() {
      int n;
      cin>>n;
      vector<tree> tr(n+1);    
      for(int i=1;i<=n;i++){
          int val;
          cin>>val;
          tr[i].val=val;
      }
      for(int i=1;i<n;i++){
          int a,b;
          cin>>a>>b;
          tr[a].branch.push_back(&tr[b]);
         
      }
      for(int i=1;i<=n;i++){
               max_val=max(max_val,dfs(&tr[i]));
      }
      cout<<max_val;
      return  0; 
}
