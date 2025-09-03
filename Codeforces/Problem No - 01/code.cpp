//My Template;-
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
void solve()
{   //Code Here
     ll n;
     cin >> n;
     vector<ll> a(n), b(n);
     for(auto &it: a) cin >> it;
     for(auto &it: b) cin >> it;
     
     vector<ll> c(2 * n+1, 0); vector<ll> d(2 * n+1, 0);
     
     ll cnt = 1;
     for(int i=1;i<n;i++){
       if(a[i-1] == a[i]){
         cnt++;
       }else{
         c[a[i-1]] = max(cnt, c[a[i-1]]);
         cnt = 1;
       }
     }
     
     c[a[n-1]] = max(cnt, c[a[n-1]]); cnt = 1;
     
     for(int i=1;i<n;i++){
       if(b[i-1] == b[i]){
         cnt++;
       }else{
         d[b[i-1]] = max(cnt, d[b[i-1]]);
         cnt = 1;
       }
     }
     
     d[b[n-1]] = max(cnt, d[b[n-1]]); 
     
     ll ans = -1;
     for(int i=1;i<d.size();i++){
       ans = max(ans, c[i]+d[i]);
     }
     
     cout << ans << endl;
     }
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)
    {
      solve();
    }
 
    
    return 0;
}
