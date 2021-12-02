#include <iostream>
#include <queue>
using namespace std;
int main(){

    int n; cin >> n;
    queue<string> q;
    for(int i = 0; i < n; ++i){

        int command; cin >> command;
        if(command == 1){
            string name; cin >> name;
            q.push(name);
        }else if(command == 2){
            q.pop();
        }

        if(!q.empty()){
            cout << q.front() << endl;
        }else{
            cout << "queue is empty" << endl;
        }

    }

}