#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
  
int main()
{
    string s;
    vector<int> nums;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            nums.push_back(s[i]-'0');
        }
    }
    sort(nums.begin(),nums.end());
    string result;
    for (int j = 0; j < nums.size(); j++)
    {
        result += to_string(nums[j]);
        result += "+";
    }
    
    result = result.substr(0,result.size()-1);
    cout << result << endl;;
    return 0;
}