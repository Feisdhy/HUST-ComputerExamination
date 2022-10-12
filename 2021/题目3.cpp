#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;

int a;
string s;
char num[N];
int minnum[N][N];

int main()
{
    while (cin >> s >> a)
    {
        for (int i = 0; i < s.size(); i ++ )
            num[i] = s[i];
            
        for (int i = 0; i < s.size(); i ++ )
        {
            minnum[i][i] = i;
            for (int j = i + 1; j < s.size(); j ++ )
                minnum[i][j] = num[minnum[i][j - 1]] <= num[j] ? minnum[i][j - 1] : j;
        }
        
        for (int i = 0, j = 0; i < s.size() - a; i ++ )
        {
            j = minnum[j][a + i];
            cout << num[j];
            j = j + 1;
        }
        cout << endl;
    }
    
    return 0;
}