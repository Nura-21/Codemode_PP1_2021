#include <iostream>
using namespace std;


bool find(int a[], int n, int k, int i = 0){

    if(i == n){ return false; }
    if(a[i] == k){ return true; }
    return find(a, n, k, i + 1);

}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];        
    }
    int k; cin >> k;
    find(a, n, k) ? cout << "Yes" : cout << "No";
}