#include <iostream>
#include <algorithm>
using namespace std;
  
int main()
{
   
   string a,b;
   getline(cin,a);
   getline(cin,b);
   
   transform(a.begin(), a.end(), a.begin(), ::toupper);
   transform(b.begin(), b.end(), b.begin(), ::toupper);

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]>b[i]){
            cout << 1 << endl;
            return 0;
        }else if (a[i]<b[i])
        {
            cout << -1 << endl;
            return 0;
        }
        
    }
    cout << 0 << endl;
    return 0;
}