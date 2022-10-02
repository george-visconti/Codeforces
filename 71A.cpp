#include <iostream>
#include <string>
#include <fstream>
using namespace std;
  
int main()
{
    int count;
    cin >> count;
    string s;
    for (int i = 0; i < count; i++)
    {
        cin >> s;
        if (s.size() > 10){
            cout << s[0] + to_string(s.size() - 2) + s[s.size()-1] << endl;
        } else {
            cout << s << endl;
        }
    }
    
}