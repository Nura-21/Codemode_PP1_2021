#include <iostream>
using namespace std;
int main(){
    
    int n = 5;
    int m = 3;
    char a[3][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = ' ';
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = n / 2 ; j > n / 2 - 1 - i; j--){
            a[i][j] = '*';
        }
        for(int j = n / 2  ; j <= n/2 + i; j++){
            a[i][j] = '*';
        }
    }

    for(int i = 0; i < m; i++){
        cout << i << " ";
        for(int j = 0; j < n; j++){
            cout  << a[i][j] << " ";
        }
        cout << endl;
    }
}