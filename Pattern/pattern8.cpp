#include<bits/stdc++.h>
using namespace std;

// demo result 
// 1 1 1 1 1 
//   2 2 2 2
//     3 3 3
//       4 4
//         5

int main(){
    int number,value=1;
    cout<<"how many number you want to see same number:";
    cin>>number;
    for(int i=1;i<=number;i++){
        for(int j=number+i-1;j>number;j--){
            cout<<"  ";
        }
        for(int j=i;j<=number;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}