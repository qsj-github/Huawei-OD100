#include <bits/stdc++.h>
using namespace std;




int  main(){
    int n;
    set<int> s;
    int  flag=1;
    
    cin>>n;
    while(n--)
    {   int x;
        cin >>x;
        if(x<0||x>1000)
        {
            flag=0;
        }
        s.insert(x);
    }
    
    int m;
    cin>>m;
    if(flag==0||m*2>s.size()){
          cout<<-1;
          return 0;
    }
    
    int sum=0;
    for(int i=0;i<m;i++){
        sum+=*s.begin();
        s.erase(s.begin());
}
     while(s.size()>m){
        s.erase(s.begin());
     }
    while(s.size()){
        sum+=*s.begin();
        s.erase(s.begin());  
    }
    cout<<sum;
    return 0;
}