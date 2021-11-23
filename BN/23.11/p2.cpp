#include <iostream>
using namespace std;

int main(){

    pair<string, int> price1;

    string name;
    int cost;
    cin >> name >> cost;
    
    price1 = make_pair(name, cost);

    cout << price1.first << " " << price1.second;

}