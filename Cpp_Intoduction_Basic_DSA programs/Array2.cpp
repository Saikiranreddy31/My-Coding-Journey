#include<bits/stdc++.h>
using namespace std;
int main()
{
// Array input with user and output
    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}