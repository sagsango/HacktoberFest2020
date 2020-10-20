#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int tiling1(int n,int m)
{
    int dp[n+1] = {0};
    dp[0] = 0;
    
    
    for(int i=1 ; i<=n ; i++)
    {
        if(i<m)
        {
            dp[i] = 1;
        }
        else if(i == m)
        {
            dp[i] = 2;
        }
        else
        {
            dp[i] = dp[i-1] + dp[i-m];
        }
    }
    
    return dp[n];
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<tiling1(n,m);
    return 0;
}
