#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 35;

struct Worker
{
    string name;
    int num, age;
    
    bool operator< (const Worker& w) const
    {
        if (age != w.age) return age < w.age;
        else if (num != w.num) return num < w.num;
        else 
        {
            for (int i = 0; i < name.size() && i < w.name.size(); i ++ )
                if (name[i] != w.name[i]) return name[i] < w.name[i];
            return name.size() < w.name.size();
        }
    }
    
}workers[N];

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i ++ ) cin >> workers[i].num >> workers[i].name >> workers[i].age;
    
    sort(workers, workers + n);
    
    n = n >= 3 ? 3 : n;
    
    for (int i = 0; i < n; i ++ )
        cout << workers[i].num << " " << workers[i].name << " " << workers[i].age << endl;
    
    return 0;
}