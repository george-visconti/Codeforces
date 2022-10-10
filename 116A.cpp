#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
   int count = 0, m = 0;
   int a,b,iters;
   cin >> iters;
   for (int i = 0; i < iters; i++)
   {
       cin >> a >> b;
       count -= a;
       count += b;
       m = max(m,count); 
   }
   cout << m << endl;
}