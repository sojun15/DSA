#include <bits/stdc++.h>
using namespace std;

int summation(int *arr, int number_of_books)
{
    int sum = 0;
    for (int i = 0; i < number_of_books; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

bool check_validity(int *arr, int mid, int number_of_books, int men)
{
    int sum = 0, minimum_men_needed = 1;
    for (int i = 0; i < number_of_books; i++)
    {
        if (arr[i] > mid)
            return 0;
        else if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            minimum_men_needed++;
            sum = 0;
            i--;
        }
    }
    if (minimum_men_needed > men)
        return 0;
    else
        return 1;
}

int main()
{
    int number_of_books, men;
    cin >> number_of_books >> men;
    int ar[number_of_books];
    for (int i = 0; i < number_of_books; i++)
    {
        cin >> ar[i];
    }
    int first = 0, last = summation(ar, number_of_books);
    int value = 99999999;
    while (first <= last)
    {
        int mid = first + (last - first) / 2;
        if (check_validity(ar, mid, number_of_books, men))
        {
            value = min(mid, value);
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    cout << value << endl;
}
