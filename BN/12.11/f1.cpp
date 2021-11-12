#include <iostream>
using namespace std;
// 1 2 3 4 5 6
// 1 + 2
// 3 + 4
// 5 + 6
int add(int a, int b){
    return a + b;
} 

void add_2(int a, int b){
    cout << a + b;
}

int main(){

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i = i + 2){
        cout << add(a[i],a[i + 1]) << endl;
    }
    //0
    //2
    //4
}