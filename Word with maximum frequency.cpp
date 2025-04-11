// problem arrays element frequency counting ****
// input***
//  5
//  5 7 2 7 2 5
//  output***
//  2 2
//  5 1
//  7 2

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
    map<string, int> freq;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }

    for(auto x:freq)
    {
        cout << x.first << " " << x.second << nl;
    }
    // above method is right way but i am doing another way
    // for (auto it = freq.begin(); it != freq.end(); it++)
    // {
    //    if( it->second ==2)
    //    {
    //        cnt++;
    //    }
    // }
    cout << cnt << nl;
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