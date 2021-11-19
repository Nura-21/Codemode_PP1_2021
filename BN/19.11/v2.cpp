#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;

    vector<int> v(n);
    

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    vector<int> v2(v.begin(), v.end());

    for(auto it : v2){
        cout << it << " ";
    }



}