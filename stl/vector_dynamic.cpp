#include <bits/stdc++.h>
using namespace std;

void for_each_loop(vector<int> number)
{
    for (int value : number)
    {
        cout << value << ' ';
    }
}

void iterative(vector<int> number)
{
    for (auto it = number.begin(); it != number.end(); it++)
    {
        cout << *it << ' ';
    }
}

int main()
{
    vector<int> number = {1, 3, 5, 4, 2};
    // delete element from last
    number.pop_back();
    // add element into last
    number.push_back(15);
    // erase elements at any index
    number.erase(number.begin() + 2);
    // insert element at any index
    number.insert(number.begin() + 2, 31);

    for_each_loop(number);
    cout << endl;
    iterative(number);
}