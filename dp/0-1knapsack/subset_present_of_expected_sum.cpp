#include <bits/stdc++.h>
using namespace std;
int main()
{
     cout<<"Give the size of array:";
     int n;
     cin>>n;
     int a[n];
        cout<<"Give the elements of array:";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Give the expected sum:";
        int target;
        cin>>target;
        bool dp[n+1][target+1];

    for(int i = 0; i <= n; i++)
        dp[i][0] = true;          

    for(int j = 1; j <= target; j++)
        dp[0][j] = false;        

        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<=target+1;j++)
            {
              
                
            if(j==0)
                {
                    dp[i][j]=true;
                }
                else if(i==0)
                {
                    dp[i][j]=false;
                }
                else
                {
                    if(a[i-1]<=j)
                    {
                        dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }

            }
        }
        if(dp[n][target]==true)
        {
            cout<<"Subset with expected sum is present"<<endl;
        }
        else
        {
            cout<<"Subset with expected sum is not present"<<endl;
        }
    return 0;

}