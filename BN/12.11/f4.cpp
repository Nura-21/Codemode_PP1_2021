#include <iostream>
using namespace std;
int find_max_in_array( int a[], int n ){
    int mx = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > mx){
            mx = a[i];
        }
    }
    return mx;
}

int main(){
    int n = 4;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        cout << find_max_in_array(arr[i], n) << endl;
    }   
}