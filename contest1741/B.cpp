#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
    int iters,n;
    cin >> iters;
    while(iters){
        cin >> n;

        if (n==3){
            cout << -1 << endl;
        } else {
            for (int i = 3; i <= n; i++){
                cout << i << ' ';
            }
            cout << '2' << ' '  << '1' << endl;
        }
        iters --;
    }
    return 0;
}