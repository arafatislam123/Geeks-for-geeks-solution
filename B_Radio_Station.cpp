// Codeforces string and map related problems
//     prolem link : https : // codeforces.com/contest/918/problem/B

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
    int n, k;
    cin >> n >> k;
    map<string, string> mp;
    for (int i = 1; i <= n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }
    // while (k--)
    // {
    //     string s, ip;
    //     cin >> s >> ip;
    //     // ip.pop_back();
    //     cout << s << " " << ip << "; #" << mp[ip] << nl;
    // }
    for (int i = 0; i < k;i++)
    {
        string s, ip;
        cin >> s >> ip;
        ip.pop_back();
        cout << s << " " << ip << ";" << " #"<< mp[ip] << nl;
    }
}

int main()
{
    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}