#include<iostream>
#include <stack>
#include <queue>
using namespace std;


int main() {
    int n;cin >> n;
    int m;cin >> m;
    int cnt = 0;
    stack<int> st;
    queue<int> Q;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        st.push(x);
    }
    for(int i = 0;i < n;i++){
        int z;cin >> z;
        Q.push(z);
    }
    int alima = 2;
    Q.push(alima);

    while(!st.empty()){
        cnt++;
        if(st.top() == Q.front()){
            st.pop();
            Q.pop();
        }
        else if(alima == Q.front() && 1 == st.top() && cnt < m){
            cout << "YES";
            return 0;
        }
        else if(alima == Q.front() && 1 == st.top() && cnt >= m){
            cout <<"Yes" << endl;
            cout << "Che opazdyvaem?" << endl;
            return 0;
        }
        else{
                Q.push(Q.front());
                Q.pop();    
            }    
        if(cnt == 10000)
            break;
    }
    cout << ";("; 
    return 0;
}