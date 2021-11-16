#include <iostream>
using namespace std;

string to_binary(int n, string ans = ""){
    if(n == 0){return ans;}
    ans = char((n % 2) + 48) + ans;
    return to_binary(n / 2, ans);
}

string to_binary_loop(int n){

    string ans = "";

    while( n > 0 ){
        ans = char((n % 2) + 48) + ans;
        n /= 2;
    }

    return ans;
}

int main(){
    int n; cin >> n;
    cout << to_binary(n);
}