#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;cin>>n;
    multiset<int> a;
    for(int i=0;i<n;i++){
        int tmp; cin>>tmp;
        a.insert(tmp);
    }
    
    return 0;
}