#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    int n; cin >> n; 
    int a[n],temp[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
        temp[i] = -1;
    }

    for (int i = 0; i < n; i++){
        int cnt = 1;
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                cnt++;
                temp[j] = 0;
            }
        }
        if (temp[i] != 0){
            temp[i] = cnt;
        }
    }

    for (int i = 0; i < n; i++){
        if (temp[i] == 1){
        cout << a[i] << " ";
        }
    }
}