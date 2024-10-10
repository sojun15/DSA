#include <bits/stdc++.h>
using namespace std;
int func(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int temp = 0, store;
    if (nums.size() == 1)
    {
        store = nums[0];
    }
    else
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                i += 1;
            }
            else
            {
                temp = 1;
                store = nums[i];
            }
        }
        if (temp == 0)
        {
            store = nums[nums.size() - 1];
        }
    }
    return store;
}
int main()
{
    int len, input;
    vector<int> nums;
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cin >> input;
        nums.push_back(input);
    }
    cout << endl
         << func(nums);
}