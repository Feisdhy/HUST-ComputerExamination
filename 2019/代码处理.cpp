#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    string s;
    int line = 1;

    ifstream in("D:/abc.txt");
    while (getline(in, s))
    {
        cout << line ++ << ". ";
        for (int i = 0; i < s.size(); i ++ )    
        {
            if (i + 1 < s.size() && s[i] == '/' && s[i + 1] == '/') break;
            else if (i + 1 < s.size() && s[i] == '/' && s[i + 1] == '*')
            {
                while (i + 1 < s.size() && !(s[i] == '*' && s[i + 1] == '/')) i ++ ;
                i ++ ;
            }
            else cout << s[i];
        }
        cout << endl;
    }
    in.close();

    return 0;
}