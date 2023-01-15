#include <bits/stdc++.h>
#include<vector>

using namespace std;

#define int            long long int


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
