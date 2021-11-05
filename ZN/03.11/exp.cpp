#include <iostream>
using namespace std;
int main(){
    int n,m; cin >> n >> m; 
    int cnt = n * m;
    int a[n][m];
    for(int i = 0; i < n; ++i){

        if(i % 2 == 1){
            for(int j = m - 1; j >= 0; --j){
                a[i][j] = cnt;
                cnt--;
            }
        }
        else{
            for(int j = 0; j < m; ++j){
                a[i][j] = cnt;
                cnt--;
            }
        }
        cout << endl;
    }

    for(int i = 0;i <n ; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}