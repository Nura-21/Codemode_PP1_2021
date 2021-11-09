#include <bits/stdc++.h>
using namespace std;

bool check(string s, string n){
    if(s!=n) return false;
    return true;
}

int main(){
    string s; 
    cin>>s;
    string n = s;
    reverse(n.begin(), n.end());
    if(check(s,n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}