#include <iostream>
using namespace std;
int main(){
    int n = 4;
    char a[n][n];

    for(int i = 0; i < n; i++){
        cout << i + 1 << " ";
        for(int j = 0; j <= i; j++){
            cout<< "*" << " ";
        }
        cout << endl;
    }

    
}