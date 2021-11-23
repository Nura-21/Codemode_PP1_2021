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
    }

    map<string, int> bill;
    int k; cin >> k;
    for(int i = 0; i < k; ++i){
        string product; cin >> product;
        int q; cin >> q;
        bill[product] = m[product] * q;
    }

    map<string, int> :: iterator it;

    for(it = bill.begin(); it != bill.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

}