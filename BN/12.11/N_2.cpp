#include <iostream>
using namespace std;

void transpose(int ** first, int ** second, int rows, int column){
    for(int i = 0; i < column; i++){
        for(int j = 0; j < rows; ++j){
            second[i][j] = first[j][i];
        }
    }

    for(int i = 0; i < column; i++){
        for(int j = 0; j < rows; ++j){
            cout << second[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    int ** arr1 = new int * [n];
    int ** arr2 = new int * [m];

    for(int i=0; i<n; i++){
        arr1[i] = new int[m];
    }
    for(int i=0; i<m; i++){
        arr2[i] = new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr1[i][j];
        }
    }


    transpose(arr1, arr2, n, m);
}