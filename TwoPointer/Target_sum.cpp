#include <bits/stdc++.h>
using namespace std;
void Target_sum(vector<int> number, int index1, int index2, int target)
{
    while (index1 < index2)
    {
        if (number[index1] + number[index2] < target)
        {
            index1++;
        }
        else if (number[index1] + number[index2] > target)
        {
            index2--;
        }
        else
        {
            cout << "Target elements is found : (" << index1 << ',' << index2 << ')';
            break;
        }
    }
}
int main()
{
    vector<int> number;
    int target = 15, input, element;
    cout << "how many element you take:";
    cin >> element;
    for (int i = 0; i < element; i++)
    {
        cin >> input;
        number.push_back(input);
    }
    int index1 = 0, index2 = element - 1;
    Target_sum(number, index1, index2, target);
}