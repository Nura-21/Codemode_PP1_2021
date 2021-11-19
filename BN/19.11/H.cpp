#include <iostream>
#include <set>
using namespace std;

void print(set<int> s){
    set<int> :: iterator it;
    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

void set_delete(set<int> & s, int k){
    set<int> :: iterator it;
    for(it = s.begin(); it != s.end(); ++it){
        if(*it == k){
            s.erase(*it);
            cout << "Deleted" << endl;
            return;
        }
    }

    cout << "Doesn't exist" << endl;
}




int main(){

    int n; cin >> n;
    set<int> s;
    while(n--){
        string command;
        cin >> command;
        if(command == "Insert"){
            int x; cin >> x;
            s.insert(x);

        }else if(command == "Delete"){
            int x; cin >> x;
            set_delete(s, x);
            
        }else if(command == "Print"){
            print(s);
        }
    }
}