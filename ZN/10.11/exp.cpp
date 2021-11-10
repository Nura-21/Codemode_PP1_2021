#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    int a[n][n];
    sort(v.begin(), v.end());
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        cin >> v[i];
        a[0][i] = v[i];
        a[i][0] = v[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                a[i][j] = 0;
            }
            else{
                a[i][j] = (a[0][j] + a[i][0]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}