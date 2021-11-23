#include <iostream>
#include <map>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    
    map<string, pair<bool,int> > m;
    int n; cin >> n;

    for(int i = 0; i < n; ++i){
        string product; cin >> product;
        int cost; cin >> cost;
        m[product] = make_pair(false,cost);
    }

    int k; cin >> k;
    for(int i=0;i<k;i++){
        string name; cin >> name;
        int count; cin >> count;
        m[name] = make_pair(true,count*m[name].second);
    }

    map<string, pair<bool,int>> :: iterator it;

    for(it=m.begin();it!=m.end();it++){
        if(it->second.first==true)
            cout<<it->first<<" "<<it->second.second<<endl;
    }
    
    return 0;
}