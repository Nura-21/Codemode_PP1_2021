#include<iostream>
using namespace std;
string degree(long long n){
    if(n == 1){
        return "Yes";
    }
    else if(n % 2 == 1) {
        return "No";
    }
    else if(n == 0){
        return "No";
    }
    return degree(n/2);
}
int main(){
    long long n;
    cin>>n;

    cout<<degree(n);




}