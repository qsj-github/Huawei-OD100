#include <bits/stdc++.h>
using namespace std;


int main()   
{
    string s;
    getline(cin,s);
    int n=s.size();
    
    for(int i=0;i<n;i++){
           int min_length=i;
          for(int j=i+1;j<n;j++){
              if(s[j]<=s[min_length]){
                    min_length=j;  
              }
              
           }
           if(s[min_length]!=s[i]){
                     char c=s[min_length];
                     s[min_length]=s[i];
                     s[i]=c;            
                     break;
              }
    }
    
    cout<<s;
    return 0;

}
