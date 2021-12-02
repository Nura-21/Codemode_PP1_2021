#include <bits/stdc++.h>
using namespace std;

int ar[8][8];
queue<pair<int, int>> q;

void step(int x, int y, int v){
    if (x >= 0 && y >= 0 && x < 8 && y < 8){
        if (ar[x][y] == -1){
            q.push(make_pair(x, y));
            ar[x][y] = v;
        }
    }
}

int main(){
    
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    for (int i = 0; i < 8; ++i){
        for (int j = 0; j < 8; ++j){
            ar[i][j] = -1;
        }
    }

    int a, b;
    cin >> a >> b;
    a--;
    b--;

    ar[a][b] = 0;
    q.push(make_pair(a, b));

    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        step(x + 1, y + 2, ar[x][y] + 1);
        step(x + 1, y - 2, ar[x][y] + 1);
        step(x - 1, y + 2, ar[x][y] + 1);
        step(x - 1, y - 2, ar[x][y] + 1);
        step(x + 2, y + 1, ar[x][y] + 1);
        step(x + 2, y - 1, ar[x][y] + 1);
        step(x - 2, y + 1, ar[x][y] + 1);
        step(x - 2, y - 1, ar[x][y] + 1);
    }

    for (int i = 0; i < 8; ++i){
        for (int j = 0; j < 8; ++j){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}