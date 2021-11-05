#include <iostream>
#include <string>
using namespace std;

string dec_to_bin(int n){

    string ans;
    if(n == 0){
        return "0";
    }
    while(n > 0){
        int reminder = n % 2;
        ans += to_string(reminder);
        n = n / 2;
    }
    return ans;
}

int main(){

    int n; cin >> n; 
    // n = 5

    for(int i = 0; i <= n; ++i){
        int cnt = 0;

        string bin = dec_to_bin(i);
        // bin = 101
        // bin.size() = 3
        for(int i = 0; i < bin.size(); ++i){

            if(bin[i] == '1'){
                //bin = 101 
                // 1 = 1 ?
                // 0 = 1 ?
                // 1 = 1 ?
                cnt = cnt + 1;
                //cnt++
            }

        }

        cout << cnt << endl;
    }
}
