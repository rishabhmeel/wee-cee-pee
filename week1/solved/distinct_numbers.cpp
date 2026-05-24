#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int var;
        cin >> var;
        s.insert(var);
    }
    cout << s.size() << "\n";
}