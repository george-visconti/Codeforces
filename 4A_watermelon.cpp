// https://codeforces.com/problemset/problem/4/A
#include <iostream>
using namespace std;

int main(){

    int weight;
    cin >> weight;
    
    if (weight % 2 == 0){
        if (weight == 2){
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    } else {
        printf("NO\n");
    }
}