#include <bits/stdc++.h>
using namespace std;

int binary(int *sorted_array, int first, int last, int target)
{
    int mid;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (sorted_array[mid] == target)
        {
            return mid;
        }
        else if (sorted_array[mid] > target)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int length, target;
    cout << "enter the length of the array and target element:";
    cin >> length >> target;
    int sorted_array[length];
    cout << "Input array elements:";
    for (int i = 0; i < length; i++)
    {
        cin >> sorted_array[i];
    }
    sort(sorted_array, sorted_array + length);
    int first = 0, last = length - 1;
    int index = binary(sorted_array, first, last, target);
    cout << "index = " << index;
}