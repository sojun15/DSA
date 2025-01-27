#include <bits/stdc++.h>
using namespace std;

void print_element(stack<pair<int, string>> element)
{
    while (!element.empty())
    {
        cout << element.top().first << "->";
        cout << element.top().second << endl;
        element.pop();
    }
}

void push_element()
{
    stack<pair<int, string>> element;
    element.push(make_pair(1, "rahad"));
    element.push(make_pair(2, "partho"));
    element.push(make_pair(15, "sojun"));

    print_element(element);
}

int main()
{
    push_element();
}