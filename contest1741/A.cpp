#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
   int nums;
   cin >> nums;
   
   string a,b;
   char a_last, b_last;
   for (int i = 0; i < nums; i++)
   {
       cin >> a >> b;
       a_last = a[a.size()-1];
       b_last = b[b.size()-1];
       
       if (a_last == b_last){
           // count number of Xs
           if (a.size() == b.size()){
               cout << '=' << endl;
           } else if (a.size() > b.size()){
               if (a_last == 'L'){
                   cout << '>' << endl;
               } else {
                   cout << '<' << endl;
               }
           } else {
               if (a_last == 'L'){
                   cout << '<' << endl;
               } else {
                   cout << '>' << endl;
               }
           }
       } else {
           if (a_last > b_last) {
               cout << '<' << endl;
           } else {
               cout << '>' << endl;
           }
       }
       
   }
   
    return 0;
}