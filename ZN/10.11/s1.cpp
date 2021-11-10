#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){

    // 1 - only unique values
    // 2 - sorted auto

    // array = {1,1,1,1}
    // set = {1}
    set <int> ss;
    vector<int> v  = {421, 543, 2, 2, 2, 55, 12, 55, -2};
    for (int i = 0; i < v.size(); i++){
        ss.insert(v[i]);
    }
    set <int> :: iterator it;
    set <int> :: reverse_iterator it2;
    for (it = ss.begin(); it != ss.end(); it++){
        cout << *it << ' ';
    }
    cout << '\n';
    for (it2 = ss.rbegin(); it2 != ss.rend(); it2++){
        cout << *it2 << ' ';
    }
}