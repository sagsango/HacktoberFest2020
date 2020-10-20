#include <iostream>
using namespace std;

int countEncodings(string str)
{
    int dp[str.length()] = {0};
    dp[0] = 1;
    
    for(int i=1 ; i<str.length() ; i++)
    {
        if(str[i] == '0' && str[i-1] == '0')
        {
            dp[i] = 0;    
        }
        else if(str[i] == '0' && str[i-1] != '0')
        {
            if(str[i-1] == '1' || str[i-1] == '2')
            {
                dp[i] = ((i>=2)?dp[i-2]:1);
            }
            else
            {
                dp[i] = 0;
            }
        }
        else if(str[i] != '0' && str[i-1] == '0')
        {
            dp[i] = dp[i-1];
        }
        else
        {
            if(stoi(str.substr(i - 1,2)) <= 26)
            {
                dp[i] = dp[i-1] + ((i>=2)?dp[i-2]:1);
            }
            else
            {
                dp[i] = dp[i-1];
            }
        }
    }
    return dp[str.length() - 1];
}

int main()
{
    string str;
    cin>>str;
    
    cout<<countEncodings(str);

    return 0;
}
