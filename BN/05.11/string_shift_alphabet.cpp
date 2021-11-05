#include <iostream>
using namespace std;
int main(){
    int n = 2; 
    string s = "abcdefz"; 
    for(int i = 0; i < s.size(); i++){
        if(s[i] + n > 'z'){
            s[i] = s[i] + n - 26;
        }else{
            s[i] = s[i] + n;
        }
    }
    cout << s;
}