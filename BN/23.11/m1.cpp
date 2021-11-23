#include <iostream>
#include <map>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    
    map<string, int> m;
    int n; cin >> n;

    for(int i = 0; i < n; ++i){
        string product; cin >> product;
        int cost; cin >> cost;
        m[product] = cost;
        //m.insert(make_pair(product, cost));
    }

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){

        cout << it->first << " " << it->second << endl;

    }

}