// number of k x k squares can be cut out from a square paper of side length n.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; // tt is no of test cases.
    cout<<"Enter the number of test cases : "<<endl;
    cin>>tt;

    while(tt--){
        cout<<"Enter the values of n and k : "<<endl;
        int n,k; 
        cin>>n>>k;

        cout<<"Number of squares can be formed is/are : "<<((n/k) * (n/k))<<endl;
    }
}