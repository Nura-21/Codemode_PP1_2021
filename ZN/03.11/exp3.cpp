#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; cin >> s; 
    int n = s.size();
    string st = "";
    for(int i = 0; i < n; i++){
        if((i + 1) % 3 != 0){
            st += s[i];
        }
    }
    cout << st << endl;
}