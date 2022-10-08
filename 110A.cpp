#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
   string s;
   cin >> s;
   int count = 0;
   for (int i = 0; i < s.size(); i++)
   {
       if (s[i] == '4' || s[i] == '7'){
           count ++;
       }
   }
   s = to_string(count);
   for (int i = 0; i < s.size(); i++)
   {
       if(s[i] != '4' && s[i] != '7')
       {
           cout << "NO" << endl;
           return 0;
       }
   }
   cout << "YES" << endl;
}