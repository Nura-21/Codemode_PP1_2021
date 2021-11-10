#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(10, 228);
    vector <int> :: iterator it;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    // {124 2 5643 15 4 21 44 _} // 
    cout << endl;
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;
    for (auto qwe : v) cout << qwe << ' ';
}