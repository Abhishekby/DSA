#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

const int N = 200005;

void solve() {
    int n;
    cin >> n;
    vector<int> arr1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }
  vector<int>arr2;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr2.push_back(temp);
    }
     for(int i=1;i<n;i++){
      if(arr1[i-1]==arr2[i]){
          swap(arr1[i],arr2[i]);
      }
   }

    int sum=0;
    print(arr1);
    print(arr2);
    for(int i=0;i<n-1;i++)
    {
      sum+=((abs(arr1[i]-arr1[i+1]))+(abs(arr2[i]-arr2[i+1])));
    }
    cout<<sum<<endl;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--) solve();

    // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}