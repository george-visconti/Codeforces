#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{
    int num;
    string colors;
    int result = 0;

    cin >> num >> colors;

    for (int i = 0; i < num-1; i++)
    {
        if (colors[i]==colors[i+1])
        {
            result += 1;
        }
        
    }
    
    cout << result << endl;
}