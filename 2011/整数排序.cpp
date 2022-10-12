#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int x, n = 0, *d;
    
    while (cin >> x)
    {
        if (n == 0) d = (int *) malloc(sizeof(int));
        else d = (int *) realloc(d, sizeof(int) * (n + 1));
        d[n ++ ] = x;
    }
    
    sort(d, d + n);

    /*
        for (int i = 0; i < n - 1; i ++ )
        {
            int min = i;
            for (int j = i + 1; j < n; j ++ )
                if (d[min] > d[j]) min = j;
            swap(d[min], d[i]);
        }
    */
    
    for (int i = 0; i < n; i ++ )
        cout << d[i] << " ";
    cout << endl;
    
    return 0;
}

/*
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int x;
    vector<int> ans;
    
    while (cin >> x) ans.push_back(x);
    
    sort(ans.begin(), ans.end());
    
    for (int i = 0; i < ans.size(); i ++ )
        cout << ans[i] << " ";
    cout << endl;
    
    return 0;
}
*/