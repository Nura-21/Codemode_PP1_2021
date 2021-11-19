#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n, -100);
    
    for(auto i : v){
        cout << i << " ";
    }
}