#include <iostream>
using namespace std;
int main(){
    
    int n = 8;
    char a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 'o';
        }
    }

    int in,jn;
    in = 1;
    jn = 1;
    a[in][jn] = 'S';
    
            if(0 <= in - 2 < 8 and 0<= jn + 1 < 8){
                a[in - 2][jn + 1] = 'X';
            }
            if(0 <= in + 2 < 8 and 0<= jn + 1 < 8){
                a[in + 2][jn + 1] = 'X';
            }
            if(0 <= in - 2 < 8 and 0<= jn - 1 < 8){
                a[in - 2][jn - 1] = 'X';
            }
            if(0 <= in + 2 < 8 and 0<= jn - 1 < 8){
                a[in + 2][jn - 1] = 'X';
            }

            if(0 <= in - 1 < 8 and 0<= jn + 2 < 8){
                a[in - 1][jn + 2] = 'W';
            }
            if(0 <= in + 1 < 8 and 0<= jn + 2 < 8){
                a[in + 1][jn + 2] = 'W';
            }
            if(0 <= in - 1 < 8 and 0<= jn - 2 < 8){
                a[in - 1][jn - 2] = 'W';
            }
            if(0 <= in + 1 < 8 and 0<= jn - 2 < 8){
                a[in + 1][jn - 2] = 'L';
            }
            

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}