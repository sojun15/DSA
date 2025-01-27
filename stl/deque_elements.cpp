#include <bits/stdc++.h>
#include <deque>
using namespace std;

deque<int> push_elements(deque<int> element)
{
    element.push_back(15);
    element.push_front(2);
    element.push_back(31);
    element.push_front(1);

    return element;
}

void access_element_randomly(deque<int> element)
{
    cout << element[2] << endl;
    cout << element[1] << endl;
}

int main()
{
    deque<int> element;

    // pushing elements function
    element = push_elements(element);

    access_element_randomly(element);
}