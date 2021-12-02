// n = 7
// 8 9 + 1 7 - *
// in for ->
// if char == +
// else if char == - 
// else if char == *
// else stack.push(char)
// <-

#include <iostream>
#include <stack>

using namespace std;
int main(){
    int n; cin >> n;
    stack<int> st;
    for(int i = 0; i < n; ++i){
        char c; cin >> c;

        if (c == '+'){

            int second = st.top();
            st.pop();

            int first = st.top();
            st.pop();

            st.push(first + second);

        }else if (c == '-'){
            int second = st.top();
            st.pop();

            int first = st.top();
            st.pop();

            st.push(first - second);
        }else if (c == '*'){
            int second = st.top();
            st.pop();

            int first = st.top();
            st.pop();

            st.push(first * second); 
        }else{
            st.push(int(c - 48));
        }
    }
}