#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
  
int main()
{
   string s;
   set<char> chars;
   cin >> s;
   for (int i = 0; i < s.size(); i++)
   {
       chars.insert(s[i]);
   }

   if (chars.size() % 2){
       cout << "IGNORE HIM!" << endl;
   } else {
       cout << "CHAT WITH HER!" << endl;
   }
}