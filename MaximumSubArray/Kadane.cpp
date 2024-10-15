#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number[] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN, sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += number[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "maximum subarray sum=" << maxSum;
}