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
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int ans=0;
    map<int, int> mp;
    for(auto x:v)
    {
        mp[x]++;
       
    }
    for(auto a:mp)
    {
       
        // cout << a.first << " " << a.second << nl;
        if(a.first<a.second)
        {
           int  cnt =(a.second - a.first);
           ans = cnt;
        }
        else if (a.first >a.second)
        {
            int cnt = (a.first - a.second);
            ans = cnt;
        }
    }
    cout << ans << nl;
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