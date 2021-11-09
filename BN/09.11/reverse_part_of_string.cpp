#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s; s = "abcdegh";
    char c = 'd';
    int pos = -1;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == c){
            pos = i;
            break;
        }
    }

    if(pos == -1){cout << "Not exist" << endl; return 0;}
    else{
        reverse(s.begin(),s.begin()+pos + 1);
        cout << s << endl;
    }

    /*
    for(int i=0;i<=pos/2;i++){
            swap(word[i],word[pos-i]);
        }
    */
}