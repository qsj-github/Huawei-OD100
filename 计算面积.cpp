#include <bits/stdc++.h>
using namespace std;

int sum=0;
int main(){
    int n,k;
    cin>>n>>k;
    int y_n=0,x_n=0;
    while(n--){
        int x,y;
        cin>>x>>y;
        
        sum+=(x-x_n)*abs(y_n);
        x_n=x;
        y_n+=y;
      
    }
    sum+=(k-x_n)*abs(y_n);
    cout<<sum;
    return 0;
}