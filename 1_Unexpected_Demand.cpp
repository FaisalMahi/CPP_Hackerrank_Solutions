#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar.begin(), ar.end());

    long long m;
    cin >> m;
    long long cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > m)
            break;
        m -= ar[i];
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
