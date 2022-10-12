#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;

int n;

struct Student
{
    string name;
    int age, score;
    
    bool operator< (const Student& s) const
    {
        if (score != s.score) return score < s.score;
        else if (name != s.name) 
        {
            for (int i = 0; i < name.size() && i < s.name.size(); i ++ )
                if (name[i] != s.name[i]) return name[i] < s.name[i];
            return name.size() < s.name.size();
        }
        else return age < s.age;
    }
}st[N];

bool cmp(const Student& s1, const Student& s2)
{
    if (s1.score != s2.score) return s1.score < s2.score;
    else if (s1.name != s2.name) 
    {
        for (int i = 0; i < s1.name.size() && i < s2.name.size(); i ++ )
            if (s1.name[i] != s2.name[i]) return s1.name[i] < s2.name[i];
        return s1.name.size() < s2.name.size();
    }
    else return s1.age < s2.age;
}

int main()
{
    cin >> n;
    
    for (int i = 0; i < n; i ++ ) cin >> st[i].name >> st[i].age >> st[i].score;
    
    //两种实现方式二选一即可
    //sort(st, st + n, cmp);
    sort(st, st + n);
    
    for (int i = 0; i < n; i ++ ) cout << st[i].name << " " << st[i].age << " " << st[i].score << endl;
    
    return 0;
}