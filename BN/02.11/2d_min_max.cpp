#include <iostream>
using namespace std;
int main(){

    int n; cin >> n;

    int arr[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> arr[i][j];
        }
    }

    int mx = arr[0][0];
    int mn = arr[0][0];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){


            if(mx < arr[i][j]){
                mx = arr[i][j];
            }

            if(mn > arr[i][j]){
                mn = arr[i][j];
            }


        }
    }

    cout << "Max : " << mx << endl;
    cout << "Min : " << mn << endl;


}