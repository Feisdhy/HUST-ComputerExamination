#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

int n;
int a[N];

int main()
{
    while (cin >> n)
    {
        for (int i = 0; i < n; i ++ ) cin >> a[i];
        
        // sort(a, a + n);
        
        for (int i = 0; i < n - 1; i ++ )
        {
            int min = i;
            for (int j = i + 1; j < n; j ++ )
                if (a[j] < a[min]) min = j;
            swap(a[min], a[i]);
        }
        
        for (int i = 0; i < n; i ++ )
        {
            if (!(!i || a[i] != a[i - 1])) 
                while (a[i] == a[i - 1]) i ++ ;
            if (i < n) cout << a[i] << " ";
        }
    }
    
    return 0;
}

/*

*/