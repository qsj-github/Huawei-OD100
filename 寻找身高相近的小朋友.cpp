#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <int> v;
vector <pair<int,int>> res;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main(){
    cin>>n>>m;
    int x;
    for(int i=0;i<m;i++){
        cin>>x;
        v.push_back(x);
    }
    int diff;
    for(int i=0;i<m;i++){
        diff=abs(n-*(v.begin()+i));
        res.push_back({diff,v[i]});
    }
    std::sort(res.begin(), res.end(), compare);
    for(auto i:res){
        cout<<i.second<<" ";
    }
    return 0;
}