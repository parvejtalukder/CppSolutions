#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    // 3 1 2 4 7 8 6
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool res = false;
        for (int i = 0; i < n; i++)

        {
            bool first = true;
            bool second = true;
            for (int j = 0; j < i; j++)
            {
                if (v[i] <= v[j])
                {
                    first = false;
                    break;
                }
            }

            for (int j = i + 1; j < n; j++)
            {
                if (v[i] >= v[j])
                {
                    second = false;
                    break;
                }
            }

            if (first && second)
            {
                cout << "Case " << k  << ": " << i+1 << "\n";
                res = true;
                break;
            }
        }
        if (!res)
        {
            cout << "Case " << k << ": " << "Humanity is doomed!" << "\n";
        }
    }
    return 0;
}