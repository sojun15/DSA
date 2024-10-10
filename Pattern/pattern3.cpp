#include<bits/stdc++.h>
using namespace std;

// demo result pattern 
// * 
// * *
// * * *
// * * * *
// * * * * *

int main(){
    int number;
    cout<<"how many number you want to see (*) :";
    cin>>number;
    for(int i=0;i<number;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}