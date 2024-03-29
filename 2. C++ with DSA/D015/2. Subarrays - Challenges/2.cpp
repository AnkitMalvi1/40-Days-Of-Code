// 2. Maximum Sum of Subarray (i) Brute Force Approach

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
                // cout << a[k] << " ";
            }
            maxSum = max(maxSum, sum);
            // cout << endl;
        }
    }

    cout << maxSum << endl;

    return 0;
}