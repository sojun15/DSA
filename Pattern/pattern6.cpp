#include<bits/stdc++.h>
using namespace std;

// demo result 
// 1 
// 2 1
// 3 2 1
// 4 3 2 1

int main(){
    int number;
    cout<<"how many number you want to see same number:";
    cin>>number;
    for(int i=1;i<=number;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}