#include <bits/stdc++.h>
using namespace std;


int  main(){
        vector<int> v;
        string input;
        getline(cin, input);

        stringstream ss(input);
         string token;

    while (getline(ss, token, ',')) {
        v.push_back(stoi(token));
    }

     int a,b,sum=0 ;
     cin>>a>>b;
     int c=1;
     while(b<v.size())
    {
        c=(a+c)%(v.size());
        v.erase(v.begin()+c);
     
     }
    
     cout<<accumulate(v.begin(), v.end(), 0);
     return 0;
}
