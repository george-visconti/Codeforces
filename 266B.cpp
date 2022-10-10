#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
  
int main()
{

    int n,t;
    string people;
    cin >> n >> t;
    cin >> people;
    while (t>0){
        for (int i = 0; i < n-1; i++)
        {
            if (people[i] == 'G'){
                continue;
            } else {
                if (people[i+1] == 'G')
                {
                    people[i] = 'G';
                    people[i+1] = 'B';
                    i++;
                }
            }
        }
        t--;
    }
    
    cout << people << endl;
    return 0;
}