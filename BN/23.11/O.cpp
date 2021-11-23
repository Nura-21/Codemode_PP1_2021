#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    freopen("output.txt","w",stdout);
    map<string, string> m;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        string log, pass;
        cin >> log >> pass;
        m[log] = pass;
    }

    int k; cin >> k;
    for(int i = 0; i < k; ++i){
        string log, pass;
        cin >> log >> pass;
        

        if(m[log] == ""){
            cout << "login error" << endl;
        }else{
            if(m[log] == pass){
                cout << "correct pass" << endl;
            }else{
                cout << "pass error" << endl;
            }
        }
    }

}