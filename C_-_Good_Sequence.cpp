// its a map related super problem
//     problem from at atttcoder
//         Input 4 3 3 3 3 output 1

//     problem link : https : // atcoder.jp/contests/arc087/tasks/arc087_a




#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define nl '\n'
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ALL(v) (v).begin(), (v).end()
#define rALL(v) (v).rbegin(), (v).rend()

#define show(x) cout << #x << " : " << x << endl

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    map<int, int> mp;
    for (auto x : v)
    {
        mp[x]++;
    }
    for (auto a : mp)
    {
        int key = a.first;
        int freq = a.second;
        if (key < freq)
        {
            ans += (freq-key);
        }
        else if (key> freq)
        {
            ans += freq;
        }
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}