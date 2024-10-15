#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number[] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = 0, sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum = 0;
        for (int j = i; j < 7; j++)
        {
            sum += number[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << "maximum subarray sum=" << maxSum;
}