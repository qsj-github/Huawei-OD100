#include <bits/stdc++.h>
using namespace std;

int count(int x){
    int flag=1;
    int sum=0;
    while(x>0){
        int digit=x%10;
        if(digit>4){
            digit--;
        }
        sum+=flag*digit;
        flag*=9;    
        x/=10;
    }
    return sum;
}
int main(){
   int n;
    cin>>n;
    cout<<count(n);
    return 0;
}