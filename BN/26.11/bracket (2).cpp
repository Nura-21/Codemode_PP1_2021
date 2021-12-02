
//   ()()() - Yes
//   (() - No
//   ))))(((( - No
//   ((((())))) - Yes

#include <iostream>
#include <stack>

using namespace std;
int main(){

    string s; cin >> s;
    stack<char> st;

    if(s[0] == ')'){
        cout << "No";
        return 0;
    }else{  
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '('){
                st.push(s[i]);
            }else{
                if(!st.empty()) st.pop();
                else{
                    cout << "No";
                    return 0;
                }
            }

        }
        if(st.empty()){
            cout << "Yes";
        }else{
            cout << "No";
        }
    }

}
