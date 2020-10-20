#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int tiling1(int n)
{
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i=3 ; i<=n ; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<tiling1(n);
    return 0;
}
