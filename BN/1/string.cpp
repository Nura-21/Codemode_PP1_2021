#include <iostream>
using namespace std;
int main(){

    string s;
    cin >> s;

    int a[5] = {1, 2 ,3 ,4 ,5};

    for(int i = 0; i < s.size(); ++i){
        cout << s[i] << " ";
    }

    cout << endl;


    for(int i = 0 ; i < 5; ++i){
        cout << a[i] << " ";
    }
}