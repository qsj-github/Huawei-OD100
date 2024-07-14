#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    string output;
    int n=s.size();
    int i=0;
    while(i<n){
        if(i<n-2 && s[i+2]=='*'){
            int num=0;
            while(s[i]!='*'){
                num=num*10+(s[i]-'0');
                i++;
            }
            output += 'j' + (num - 10);  // 映射到 'j' 至 'z'
            i++;  // 跳过 '*'
        }
        else{
            output+='a'+(s[i]-'1');
            i++;
        }
       
    }
    cout<<output<<endl;
    return 0;
}
