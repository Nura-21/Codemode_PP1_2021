#include <iostream>
using namespace std;

string capital_even( string s ) {
    for(int i=0; i<s.length(); i++){
        if(i % 2 == 0){
            s[i] -= 32;
        }
    }
    return s;
}

void capital_even_void(string s){
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0){
            cout << char(int(s[i]) - 32);
        }else{
            cout << s[i];
        }
    }
}

int main(){
    string arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++){
        capital_even_void(arr[i]);
        cout << endl;
    }

}