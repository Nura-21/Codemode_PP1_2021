#include <iostream>
using namespace std;
bool check_unique(int n, int a[]){
    for(int i = 0; i < n; i++){
        int val = a[i];
        for(int j = i+1; j < n; ++j){
            if(val == a[j]){
                return false;
            }
        }
    }
    return true;
}

void print_duplicates(int n,int a[]){
    bool no = false;
    for(int i = 0; i < n; ++i){
        int j;
        for(int j = i + 1; j < n; ++j){
            if(a[i] == a[j]){
                no = true;
                cout << a[i] << " ";
            }
        }
    }
    cout << endl;
    if (!no){
        cout << "Unique array" << endl;
    }
}


int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }    
    
    if(check_unique(n,arr)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    print_duplicates(n,arr);
}