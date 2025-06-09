#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(v1[i] - v2[i]);
    }
    cout << sum << endl;
    return 0;
}