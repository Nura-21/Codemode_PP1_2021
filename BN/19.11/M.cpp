#include <iostream>
#include <set>
using namespace std;
int main(){

    int n; cin >> n;
    set<int> s;
    while(n--){

        int x; cin >> x;
        s.insert(x);

    }

    int sum = 0;

    cout << s.size() << endl;

    set<int> :: iterator it;
    for(it = s.begin(); it != s.end(); ++it){
        sum += *it;
    }

    cout << sum;


}