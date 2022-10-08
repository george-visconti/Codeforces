#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
   int a,b;
   cin >> a >> b;
   int result = 0;
   while (a <= b){
       a *= 3;
       b *= 2;
       result ++;
   }
   cout << result << endl;
}