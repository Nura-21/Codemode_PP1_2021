#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    int cnt = 0;

    vector<string> cr_word(n);
    
    for(int i=0;i<n;i++)
        cin>>cr_word[i];
    

    for(int i=0;i<m;i++){
        string to_check;cin>>to_check;
        for(int j = 0; j < cr_word.size(); ++j){
            if(to_check.find(cr_word[j],0) != -1){
                cnt += 1000;
            }
        }
    }
    
    if(cnt==0)
        cout<<"Rakhmet, Yerla!Krasavchik!@erla1302\n";
    else{
        cout<<"Emae, balin\n";
        cout<<cnt<<endl;
    }
    return 0;
}