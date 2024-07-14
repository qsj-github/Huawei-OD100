#include <bits/stdc++.h>
using namespace std;


int  main(){
     int n;
     vector <int> v;
     cin >>n;
     int x; 
     for(int i=0;i<n;i++){
          cin>>x;
          v.push_back(x);
     }
      stack <int> s;
      vector<int > res(n,0);
      for(int i=0;i<n;i++){
          //用while循环来一直往下找
         while (!s.empty() && v[s.top()] < v[i]) {
            res[s.top()] = i;
            s.pop();
         }
         s.push(i);
          
      }
      for(auto i:res){
        cout<<i<< "  ";     
       }
       return 0;
}