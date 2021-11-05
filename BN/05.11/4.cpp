#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;
    // s = codeleet
    
    int indices[s.size()];
    // s.size() = 8
    // int indices[8];

    for(int i = 0; i < s.size();++i){
        cin >> indices[i];
    }

    string ans = s;
    // ans = codeleet
    // s = codeleet


    for(int i = 0; i < s.size(); ++i){

        ans[  indices[i]  ] =  s[i] ;
        cout << ans << endl;
    }


}