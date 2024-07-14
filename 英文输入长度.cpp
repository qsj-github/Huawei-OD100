#include <bits/stdc++.h>
using namespace std;

set <string> st;
string cleanword(string word){
   string clean;
    for (char c : word) {
        if (isalpha(c) || c == '\'' || c == '-') {
            clean += c;
        }
    }
    return clean;
}
int main(){
    string s,prefix;
    getline(cin,s);
    cin>>prefix;
    stringstream ss(s);
    string word;
    while(ss>>word){
        string clean_word=cleanword(word);
        if(clean_word.substr(0,prefix.size())==prefix){
            st.insert(clean_word);
        }
    }
    if(st.empty()){
        cout<<prefix;
    }
    else{
        for (auto it = st.begin(); it !=st.end(); ++it) {
            if (it != st.begin()) cout << ' '; // 添加空格除了第一个单词外
            cout << *it;
        }
       
    }
    return 0;
}