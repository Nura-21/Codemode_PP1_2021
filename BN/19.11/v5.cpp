#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    while(n--){
        int x; 
        cin >> x;
        v.push_back(x);
    }

    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    //v.insert(v.end() - 2, 10);
    v.insert(v.begin() + 2, 10);
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    v.erase(v.begin() + 3, v.begin() + 5);

    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    for(auto i : v){
        cout << i << " ";
    }
}