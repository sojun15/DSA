#include <bits/stdc++.h>
using namespace std;

void print_element(map<int, string> product)
{
    for (auto p : product)
    {
        cout << p.first << ' ';
        cout << p.second << endl;
    }
}

void insert_element()
{
    map<int, string> product;
    product[5] = "mobile";
    product[15] = "headphone";
    product[11] = "laptop";
    product[13] = "mouse";

    product.insert(make_pair(1, "rahad"));

    print_element(product);
}

int main()
{
    insert_element();
}