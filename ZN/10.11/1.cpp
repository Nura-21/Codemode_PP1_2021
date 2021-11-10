//search an element in 1D and 2D array using recursive function
#include <iostream>
using namespace std;

bool find(int a[],int n, int k,int i = 0){
    if(i == n){
        return false;
    }
    if(a[i] == k){return true;}
    else{
        return find(a,n,k,i+1);
    }
}



int main(){
    int n; n = 5;
    int a[n];
    int b[n][n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << find(a,n,3);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }


    for(int i = 0; i < n; i++){
        if(find(b[i],n,3)){
            cout << "Yes";
            break;
        }
        if(i + 1 == n){
            cout << "No";
            break;
        }
    }
}