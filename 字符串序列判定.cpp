#include <bits/stdc++.h>
using namespace std;



int main()   
{
     string s;
     string l;
     bool flag=false;
     int lastwei=0;
     int res=-1;
     cin >>s>>l;
    int n=s.size();
    int m=l.size();
    for (int i=0;i<n;i++){
        while(lastwei<m){
           if(s[i]==l[lastwei]){
                  flag=true;
                  res=lastwei;
                  lastwei+=1;
                  break;
           }      
           lastwei+=1;
                   
         }
        if(flag==false){
              cout<<-1;
            return 0;
        }
        
         
      }          
      cout<<res;
      return 0;

}
