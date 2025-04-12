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
// map<string, int> mp;

// string s;
// getline(cin, s);
// stringstream ss(s);
// string s2;
// int maxi = 0;

// while (ss >> s2)
// {
//     mp[s2]++;
//     // cout << mp[s2] << " ";
//     maxi = max(maxi, mp[s2]);
// }
// cout << maxi << nl;

void solve(int tc)
{
    int n, m;
    cin >> n >> m;
    pair<string, string> p1;
    pair<string, string> p2;
    while(n--)
    {
        string x, y;
        cin >> x >> y;
        p1 = make_pair(x, y);
    }
    while(m--)
    {
        string a, b;
        cin >> a >> b;
        p2 = make_pair(a, b);
    }
    for (int i = 0; i < m;i++)
    {
        if(p1.second==p2.second){
            cout << p1.first << " " << p1.second << ";" << " " << "#" << p2.first << nl;
        }
    }
}

int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}
