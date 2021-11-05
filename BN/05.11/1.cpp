#include <iostream>
using namespace std;

bool unique(int n, int a[]){

    for(int i = 0; i < n; ++i){

        int value = a[i];

        for(int j = i + 1; j < n; ++j){

            if( value == a[j] ){
                return false;
            }

        }
    }
    return true;
}

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    int n; cin >> n; 
    int a[n];
    

    
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m; cin >> m;
    int b[m];

    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }

    /*
    bool is_unique = true;

    for(int i = 0; i < n; ++i){

        int value = a[i];

        for(int j = i + 1; j < n; ++j){

            if( value == a[j] ){
                is_unique = false;
                break;
            }

        }
    }

    if(is_unique == true){ 
        cout << "Array is unique" << endl;
    }else{
        cout << "Array is not unique" << endl;
    }*/
    
    if(unique(n, a)){
        cout << "Array is unique" << endl;
    }else{
        cout << "Array is not unique" << endl;
    }

    if(unique(m, b)){
        cout << "Array is unique" << endl;
    }else{
        cout << "Array is not unique" << endl;
    }
}

// create array 
// method to check array unique
