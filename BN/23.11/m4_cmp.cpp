#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> & p1, pair<string, int> & p2){
    if(p1.second == p2.second){
        if(p1.first < p2.first){
            return true;
        }else{
            return false;
        }
    }else{
        if(p1.second > p2.second){
            return true;
        }else{
            return false;
        }
    }
}

bool shorted_cmp(pair<string, int> & p1, pair<string, int> & p2){
    if(p1.second == p2.second) return p1.first < p2.first;
    else return p1.second < p2.second;
}

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

    vector<pair<string, int>> v(bill.begin(), bill.end());

    sort(v.begin(), v.end(), shorted_cmp);

    vector<pair<string, int>> :: iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

}