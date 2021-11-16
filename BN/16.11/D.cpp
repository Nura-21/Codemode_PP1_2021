#include <iostream>
using namespace std;

int sum(string s, int ans = 0, int i = 0){

    if(i == s.size()){
        return ans;
    }
    ans += s[i] - 48; 
    return sum(s, ans, ++i);
}

int main(){

    string s; cin >> s;
    cout << sum(s);

}