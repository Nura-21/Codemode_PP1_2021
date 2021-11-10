#include <iostream>
#include <set>
using namespace std;

int main(){

    string s;
    cin >> s;
    set <char> ss;
    set <char> :: iterator it;
    for (int i = 0; i < s.size(); i++){
        // if (65 <= s[i] && s[i] <= 90){
        //     s[i] += 32;
        // }
        ss.insert(tolower(s[i]));
    }
    cout << ss.size() << '\n';
    for (it = ss.begin(); it != ss.end(); it++){
        cout << *it << ' ';
    }

    return 0;
}