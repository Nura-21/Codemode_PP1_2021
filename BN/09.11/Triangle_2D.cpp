#include <iostream>
using namespace std;
int main(){
    
    int n = 5;
    char a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = ' ';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            a[i][j] = '*';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}