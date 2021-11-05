#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;getline(cin,s);

    string s1="";

    for(int i=0;i<s.length();i++){
        if(s[i]!='a' and s[i]!='e' and s[i]!='u' and s[i]!='o' and s[i]!='i')
            s1+=s[i];
    }
    cout<<s1;

    return 0;
}
//aieuo
