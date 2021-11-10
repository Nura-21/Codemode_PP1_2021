#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> v = {5, 21, 56, -2, -33, 123, 56};
    vector <int> :: iterator it;
    for (auto i : v) cout << i << ' ';
    cout << '\n';
    // sort(v.begin() + 2, v.end() - 2);
    // reverse(v.begin(), v.end());
    // v.insert(v.begin() + 2, 6);
    // v.erase(v.begin(), v.begin() + 1);
    // v.erase(v.begin());
    for (auto i : v) cout << i << ' ';
}