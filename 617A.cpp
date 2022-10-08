#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
   int dist, iters = 0;
   cin >> dist;
   while (dist > 0){
       dist -= 5;
       iters ++;
   }
   cout << iters << endl;
}