#include <bits/stdc++.h>
using namespace std;


int main() {
   string s;   
   int sum=0;
    bool flag=false;
   getline(cin,s);
  for(int i=0;i<s.size();i++){
    
       if('0'<=s[i]&&s[i]<='9'){
           sum+=(s[i]-'0');
       }
       else if(s[i]=='-'){
          int num=0;
          flag=true;//标记为负数
          int j=i+1;
          while(j<s.size()&&isdigit(s[j])){
              num=num*10+s[j]-'0';
              j++;
          }
          if(flag){
              num=-num;
              flag=false;
              sum+=num;
          }
          i=j-1;
      }
   }
    
    cout<<sum;
    return 0;
   
}
