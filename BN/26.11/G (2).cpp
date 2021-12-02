#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s; cin >> s;
    stack<char> st;

    for(int i = 0; i < s.size(); ++i){

        if(st.empty()){
            st.push(s[i]);
        }else{
            char last = st.top();
            if(last == '1' and s[i] == '1'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }
    string ans = "";
    while(!st.empty()){
        ans = st.top() + ans;
        st.pop();
    }

    cout << ans;

}