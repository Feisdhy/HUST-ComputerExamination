#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int letter[26];

int main()
{
    string s;
    getline(cin, s);
    
    int letters = 0, words = 0, max = 0;
    for (int i = 0; i < s.size(); i ++ )
    {
        if (isalpha(s[i]))
        {
            while (isalpha(s[i])) letters ++ , letter[tolower(s[i ++ ]) - 'a'] ++ ;
            i -- ;
            words ++ ;
        }
    }
    
    cout << letters << endl << words << endl;
    
    for (int i = 0; i < 26; i ++ ) max = max > letter[i] ? max : letter[i];
    
    for (int i = 0; i < 26; i ++ ) 
        if (letter[i] == max)
            cout << (char) (i + 'a') << ' ';
    
    cout << endl << max;
    
    return 0;
}