#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int cnt = 0;
    string str;
    getline(cin, str);
    
    for (int i = 0; i < str.size(); i ++ )
    {
        if (isalpha(str[i])) cnt ++ ;
        else
        {
            cout << cnt << " ";
            cnt = 0;
            
            while (str[i] == ' ') i ++ ;
            if (str[i - 1] == ' ') i -- ;
        }
    }
    
    return 0;
}