#include <bits/stdc++.h>
using namespace std;
vector <int> v;
bool is_prime(int n){
    if(n==2)  return true;
    if(n%2==0)  return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)  return false;
    }
    return true;
}


int  main(){
    uint32_t n;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0&&is_prime(i)&&is_prime(n/i)){
            if(i<(n/i))  cout<<i<< ' '<<(n/i);
            else cout<<(n/i)<<' '<<i;
            return 0;
        }
    }
    cout<<-1<<' '<<-1;
    return 0;
}