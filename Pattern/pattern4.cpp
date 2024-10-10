#include<bits/stdc++.h>
using namespace std;

// demo result 
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

int main(){
    int number;
    cout<<"how many number you want to see same number:";
    cin>>number;
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}