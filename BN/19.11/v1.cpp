#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v1;
    int n;

    while(cin >> n){
        if(n == 0){
            break;
        }else{
            v1.push_back(n);
        }
    }

    for(auto i : v1){
        cout << i << " ";
    }




}