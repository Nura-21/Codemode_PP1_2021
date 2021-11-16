#include <iostream>
using namespace std;

char find_max(string s, char max = '0', int i = 0){
    if(i == s.size()){
        return max;
    }
    if(s[i] > max){
        max = s[i];
    }
    //s[i] - 48
    return find_max(s, max, ++i);
}

int main(){

    string s; cin >> s;
    cout << find_max(s);

}