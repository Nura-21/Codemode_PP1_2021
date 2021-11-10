#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {1,2,3,4,5,6,7,8};
    vector <int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;
    for (it = v.end() - 1; it >= v.begin(); it--){
        cout << *it << ' ';
    }
}