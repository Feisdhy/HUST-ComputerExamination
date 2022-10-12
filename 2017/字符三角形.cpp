#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void print(char c, char base)
{
    for (int i = 0; i <= c - base; i ++ )
    {
        for (int j = 0; j < i; j ++ )
            cout << "  ";
        
        char j;
        
        for (j = base; j <= c - i; j ++ )
            cout << j << " ";
            
        for (j = j - 2; j >= base; j -- )
            cout << j << " ";
            
        cout << endl;
    }
}

int main()
{
    char c;
    cin >> c;
    
    if (islower(c)) print(c, 'a');
    else print(c, 'A');
    
    return 0;
}