#include <iostream>
using namespace std;
  
int main()
{
   int n,k;
   cin >> n >> k;
   cin.ignore();
   int scores[n];
   int result=0;
   for (int i = 0; i < n; i++)
   {
       cin >> scores[i];
   }

   for (int j = 0; j < n; j++)
   {
       if (scores[j]>=scores[k-1] && scores[j]>0){
           result ++;
       }
   }

    cout << result << endl;
}