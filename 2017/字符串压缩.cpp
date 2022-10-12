#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string s, res;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i = i + 2)
    {
        if (i + 1 < s.size())
        {
            int num = stoi(s.substr(i, 2));
            num += 32;
            res += to_string(num);
        }
        else res = res + s[i] + "0";
    }
    
    cout << res << endl;
    
    return 0;
}