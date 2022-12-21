#include <bits/stdc++.h>
#include<vector>

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
int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums);
        for (int i = 0; i <dp.size(); i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        
        for(int i = 1; i < nums.size(); i++) 
            dp[i] = max(nums[i], nums[i] + dp[i-1]);
        for (int i = 0; i <dp.size(); i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;        
        return *max_element(begin(dp), end(dp));
    
    }


void solve() {
    
    vector<int> num;
    for(int i=0;i<9;i++)
    {  int temp;
        cin>>temp;

        num.push_back(temp);
    }
cout<<maxSubArray(num)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    clock_t z = clock();

    int t = 1;
    // cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}