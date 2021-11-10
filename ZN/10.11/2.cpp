//string representations of arrays are equal?
//function using recursion

#include <iostream>
using namespace std;

string represent(string * a[], int n, int i, string ans){
    if(i + 1 == n){
        return ans;
    }
    cout << i << ans << endl;
    ans += *a[i];
    represent(a, n, i + 1, ans);
}

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

    cout << represent(a,n,0,"");
}