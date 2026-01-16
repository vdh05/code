// https://codeforces.com/problemset/problem/996/A*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[5]={100,20,10,5,1};
    int count=0;
    for(int i=0;i<5;i++){
        while(n>=arr[i])
        {
            n=n-arr[i];
            count++;
        }
        if(n==0){
            break;
        }

    }
    cout<<count<<endl;    return 0;
    }