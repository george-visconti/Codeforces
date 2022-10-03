#include <iostream>
using namespace std;
  
int main()
{
   int r,c,k;
   int result = 0;
   for (int i = 0; i < 5; i++)
   {
       for (int j = 0; j < 5; j++)
       {
           cin >> k;
           if (k == 1){
               r = i;
               c = j;
           }
       }
   }

   result = abs(r-2) + abs(c-2);
   cout << result << endl;
}