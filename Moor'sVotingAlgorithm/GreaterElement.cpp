//! determine greater element there use moor's voting algorithm

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int length, input, count = 0, temporary;
    vector<int> number;
    cout << "how many element you take:";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> input;
        number.push_back(input);
    }
    for (int i = 0; i < length; i++)
    {
        if (count == 0)
        {
            temporary = number[i];
        }
        if (number[i] == temporary)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << "Greater element is:" << temporary;
}