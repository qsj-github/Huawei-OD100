#include <bits/stdc++.h>
using namespace std;



// 判断是否符合获得出勤奖的条件

int main() {
    int n;
    cin >>n;
     priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    
    while(pq.size()>=3){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        int z=pq.top();
        pq.top();
        
        if(x==y==z)  continue;
        else if(x==y &&y!=z)   pq.push(z-y);
        else if (x!=y &&y==z)  pq.push(y-x);
        else if (x!=y &&y!=z)  pq.push(abs(x+z-2*y));
        
    }
   
     if (pq.size() == 0) {
        cout << 0;
    } else if (pq.size() == 1) {
        cout << pq.top();
    } else {
        // 剩余两块银饰
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        cout << max(a, b);
    }

    return 0;
    
    
    
}
