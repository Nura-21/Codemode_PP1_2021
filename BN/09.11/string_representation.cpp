#include <iostream>
using namespace std;
//Is string representation of two array equal?
int main(){

    // create n-size
    // in for(n times) cin >> strings
    // solution


        //Creating arrays
    int n,m; cin >> n >> m;
    string a[n];
    string b[m];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }
    //Solution
    string ans1 = "";
    for(int i = 0; i < n; ++i){
        ans1 += a[i];
        //ans1 = ans1 + a[i];
    }

    string ans2 = "";
    for(int i = 0; i < m; ++i){
        ans2+= b[i];
    }

    if(ans1 == ans2){
        cout << "Yes";
    }else{
        cout << "No";
    }
}