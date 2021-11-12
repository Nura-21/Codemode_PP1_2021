#include <iostream>
using namespace std;

bool find(int a[], int n, int k){

    for(int i = 0; i < n; i++){
        if(a[i] == k){return true;}
    }

    return false;
}

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k; cin >> k;

    if( find(arr,n,k) ){
        cout << "Yes";
    }else{
        cout << "No";
    }
}