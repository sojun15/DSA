#include <bits/stdc++.h>
using namespace std;

bool check_validation(int *painter, int number, int men, int max_time)
{
    int wall = 0, men2 = 1;
    for (int i = 0; i < number; i++)
    {
        if ((painter[i] + wall) <= max_time)
        {
            wall += painter[i];
        }
        else
        {
            men2++;
            wall = 0;
            i--;
        }
    }
    if (men2 > men)
        return 0;
    else
        return 1;
}

int total_time(int *painter, int number)
{
    int sum = 0;
    for (int i = 0; i < number; i++)
    {
        sum += painter[i];
    }
    return sum;
}

int main()
{
    int number, men;
    cin >> number >> men;
    int painter[number];
    for (int i = 0; i < number; i++)
    {
        cin >> painter[i];
    }

    int first = 0, last = total_time(painter, number);
    int mid, ans = INT_MAX;

    while (first <= last)
    {
        mid = first + (last - first) / 2;
        if (check_validation(painter, number, men, mid))
        {
            ans = min(ans, mid);
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    cout << ans;
}
