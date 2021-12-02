#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<char> st;
    string s; cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(st.empty()){
            st.push(s[i]);
        }else{
            char last = st.top();
            if(last == '1' and s[i] == '6' or
            last == '2' and s[i] == '5' or
            last == '3' and s[i] == '6' or
            last == '4' and s[i] == '9' or
            last == '6' and s[i] == '4' or
            last == '8' and s[i] == '1'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }

    if(st.empty()){
        cout << "Stack is empty";
    }else{
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }

    

}