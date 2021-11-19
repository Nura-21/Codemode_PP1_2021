#include <iostream>
#include <set>
using namespace std;
int main(){

    int n; cin >> n;
    set<int> s;
    while(n--){

        int x; cin >> x;
        if(x % 2 == 1){
            s.insert(x);
        }
        
    }


    cout << s.size() << endl;

    set<int> :: iterator it;
    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }


}