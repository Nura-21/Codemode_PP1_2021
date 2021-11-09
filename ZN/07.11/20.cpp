#include <iostream>
using namespace std;

bool count(string s){
    int cnt = 0;
    for(int i = 1; i < s.size(); ++i){
        cnt += (int(s[i]) - 48);
    } 
    int n = int(s[0]) - 48;
    if(cnt % 10 == n){
        return true;
    }else{
        return false;
    }
}
int main(){
    string s; cin >> s;
    if(count(s)){
        cout << "YES";
    }else{
        cout << "NO";
    }
}