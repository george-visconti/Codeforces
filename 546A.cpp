#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
   int k,n,w;
   cin >> k >> n >> w;
   int total = 0;
   for (int i = 1; i <= w; i++)
   {
       total += (i*k);
   }

   if (total - n < 0){
       cout << 0 << endl;
       return 0;
   }
   cout << total - n << endl;
}