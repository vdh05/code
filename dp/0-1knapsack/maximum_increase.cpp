//https://codeforces.com/problemset/problem/702/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int maxLen = 1;
    int currLen = 1;

    for (int i = 1; i < t; i++) {
        if (arr[i] > arr[i - 1]) {
            currLen++;
        } else {
            currLen = 1;
        }
        maxLen = max(maxLen, currLen);
    }

    cout << maxLen << endl;
}
