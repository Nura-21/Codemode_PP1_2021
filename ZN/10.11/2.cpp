//string representations of arrays are equal?

#include <iostream>
using namespace std;
int main(){
    int n; cin >> n; 
    string a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m; cin >> m; 
    string b[m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    string ans1 = "";
    string ans2 = "";
    for(int i = 0; i < n; ++i){
        ans1 += a[i];
    }

    for(int i = 0; i < m; ++i){
        ans2 += b[i];
    }

    if(ans1 == ans2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}