#include <iostream>
using namespace std;
int rec(){
    int n; cin >> n;
    if(n==0) return 0;
    return rec()+n;
}
int main(){
    cout<<rec();
}