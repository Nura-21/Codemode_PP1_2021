#include <iostream>
using namespace std;

int to_degree_rec(int n){
    if(n == 0){
        return 1;
    }
    return to_degree_rec(n - 1) * 2;
}


int to_degree(int n){
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans *= 2;
    }
    return ans;
}

int main(){
    
    int n; cin >> n;
    cout << "Loop : " << to_degree(n) << endl;
    cout << "Rec : " << to_degree_rec(n) << endl;
}