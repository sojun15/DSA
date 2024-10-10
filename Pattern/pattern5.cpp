#include<bits/stdc++.h>
using namespace std;

// demo result 
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

int main(){
    int number;
    cout<<"how many number you want to see same number:";
    cin>>number;
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}