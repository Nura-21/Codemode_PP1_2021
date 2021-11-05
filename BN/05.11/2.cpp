#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    int n; cin >> n; 
    int a[n];

    int ans[n];
    
    for(int i = 0; i < n; ++i){
        cin >> a[i];

        ans[i] = -1;
    }

    for(int i = 0; i < n; ++i){

        if( a[i] % 2 == 0){

            ans[i] = a[i];

        }

    }


    for(int i = 0; i < n; ++i){
        cout << ans[i] << " ";
    }

    cout << endl;

    sort(ans,ans + n);
    
    cout << "Sorted" << endl;

    for(int i = 0; i < n; ++i){

        if(ans[i] != -1){
            cout << ans[i] << " ";
        }
        
    }
}


// create array
// delete even values
// sort