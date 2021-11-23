#include <iostream>
#include <map>

using namespace std;
int main(){

    freopen("input.txt","r",stdin);
    map<string, bool> m;

    int n; cin >> n;
    for(int i = 0; i < n; ++i){

        string name;
        cin >> name;
        m[name] = false;

    }

    int k;
    cin >> k;
    for(int i = 0; i < k; ++i){
        string name;
        cin >> name;
        m[name] = true;
    }

    map<string, bool> :: iterator it;  

    cout << "Good students : " << endl;

    for(it = m.begin(); it != m.end(); ++it){
        if( it->second == true){
            cout << it->first << endl;
        }
    }

    cout << "Bad students : " << endl;

    for(it = m.begin(); it != m.end(); ++it){
        if( it->second != true){
            cout << it->first << endl;
        }
    }

}