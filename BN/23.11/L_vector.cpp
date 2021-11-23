#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second;
}
int main(){
    
    int n; cin >> n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(i+1,a+b));
    }  

    sort(v.begin(),v.end(),cmp);

    for(auto it:v)
        cout<<it.first<<" ";
    return 0;
}