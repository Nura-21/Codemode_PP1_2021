#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second;
}

int main(){

    map<int, int> m;
    int n; cin >> n;
    for(int i = 0; i  < n; ++i){
        int a,b;
        cin >> a >> b;
        m[a + b] = i + 1;
    }

    map<int, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << it->first << " ";
    }

}