#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
    string s;
    cin >> s;

    int lower = 0, upper = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            upper ++;
        } else {
            lower ++;
        }
    }

    if (upper > lower){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout << s << endl;
        return 0;
    }
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout << s << endl;
}