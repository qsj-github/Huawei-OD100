#include <bits/stdc++.h>
using namespace std;

map<char,int> mp;

map<char,int> process(string s){
    istringstream ss(s);
    string s1;
    while(getline(ss,s1,',')){
              string c;
              int key;
              istringstream token(s1);
              getline(token,c,':');
              token>>key;
              mp[c[0]]=key;
    }
    return  mp;
}

map<char,int> map_out(string s){
    istringstream ss(s);
    string s1;
    while(getline(ss,s1,',')){
              string c;
              int key;
              istringstream token(s1);
              getline(token,c,':');
              token>>key;
              mp[c[0]]-=key;
    }
    return mp;
}

int main(){
   string s,s1,s2;
   getline(cin,s);
   istringstream ss(s);
   while(getline(ss,s1,'@')){
         ss>>s2;
   }
   
   process(s1);
   map_out(s2);
    bool first = true;
    for (const auto& p : mp) {
        if (p.second > 0) {
            if (!first) {
                cout << ",";
            }
            cout << p.first << ":" << p.second;
            first = false;
        }
    }
    cout << endl;
}