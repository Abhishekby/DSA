
#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define all(v) v.begin(),v.end()
using namespace std;

void solve(){
ll t;
    cin>>t;
    while(t--){
 ll n;
  cin >> n;
  vector<ll>v(n);
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
  }
  cout<<sum<<endl;
  ll x = 1, ans = 0;
  while (sum > 0) {
    sum -= x;
    ans += 1;
    x += 1;
  }
  if (sum < 0)
    cout << ans - 1<<endl;
  else
    cout << ans<<endl;

    
    }
}

int main() {
  // your code goes here

solve();

  return 0;
}
