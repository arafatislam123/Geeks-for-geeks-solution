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
    string s;
    getline(cin, s);
    stringstream ss(s);
    string s2;
    while(ss>>s2)
    {
        cout << s2 <<nl;
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