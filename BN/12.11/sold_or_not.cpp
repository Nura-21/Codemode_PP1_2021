/* n = 3, m = 3
    Costs : 
    1 2 3
    4 5 6
    7 8 9
    Sold : 
    1 0 1
    0 1 0
    1 0 1

*/

#include <iostream>
using namespace std;
 
int main() {
    int n, m, totalRevenue = 0;
    cin >> n >> m;
    int* tickets = new int[n * m];
    for (int i = 0; i < n * m; i++) {
        cin >> tickets[i];
    }
    for (int i = 0, isSold; i < n * m; i++) {
        cin >> isSold;
        totalRevenue += tickets[i] * isSold;
    }
    cout << totalRevenue;
    return 0;
}