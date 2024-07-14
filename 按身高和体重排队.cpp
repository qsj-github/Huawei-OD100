#include <bits/stdc++.h>

using namespace std;


struct cmp{
   int height;
    int weight;
    int index;
    
    cmp(int h ,int w,int i) : height(h) ,weight(w),index(i){}
    
    bool operator <(const cmp & c){
          if (height !=c.height) return  height<c.height;
           if (weight!=c.weight) return  weight<c.weight;
              return index<c.index;
    }
};

int main(){
    int x;
    cin>>x;
    vector <cmp> v;
    vector <int> h(x);
    for(int i=0;i<x;i++){
        cin>>h[i];
    }
      for(int i=0;i<x;i++){
        int w;
         cin>>w;
         v.emplace_back(h[i],w,i);
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i.index+1;
        
    }
    return 0;
}