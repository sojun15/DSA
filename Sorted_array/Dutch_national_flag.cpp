#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int number)
{
    for (int i = 0; i < number; i++)
    {
        cout << arr[i] << ' ';
    }
}

int main()
{
    int number;
    cin >> number;
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }
    int low = 0, mid = 0, high = number - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    print_array(arr, number);
}
