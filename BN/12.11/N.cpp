#include <iostream>
using namespace std;

int arr[1001][1001];
int arr2[1001][1001];

void transpose(int rows, int columns){
    for(int i=0; i<columns; i++){
        for(int j=0; j<rows; j++){
            arr2[i][j] = arr[j][i];
        }
    }

    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}

    
int main(){

    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    transpose(n,m);
}
