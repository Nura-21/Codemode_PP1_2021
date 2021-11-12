#include <iostream>
using namespace std;
void print(int ** arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 4;
    int m = 5;
    int ** arr = new int * [n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[m];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
}