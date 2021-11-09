#include <iostream>
using namespace std;

bool checkIfPangram(string sentence) {
        int cnt[26];
        for(int i=0;i<26;i++)
            cnt[i]=0;
        for(int i=0;i<sentence.length();i++){
            cnt[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(cnt[i]==0)
                return false;
        }
        return true;
    }

int main(){
    string s; cin >> s;

    int cnt[26];

    bool ok = true;

    for(int i=0;i<26;i++)
        cnt[i]=0;

    for(int i=0;i<s.length();i++){
        int index = s[i] - 'a';
        cnt[index]++;
        // 1)cnt[0] = 1 <- a
        // 2)cnt[1] = 1 <- b
        // 3)cnt[0] = 2 <- a
    }

    for(int i=0;i<26;i++){
        if(cnt[i]==0)
            ok = false;
            break;
    }
    if(ok){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
