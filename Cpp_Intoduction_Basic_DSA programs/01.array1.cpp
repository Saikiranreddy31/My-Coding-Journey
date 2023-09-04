#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    cin>> arr[0]>> arr[1] >>arr[2] >>arr[3] >>arr[4];  // we don't know address of 0th index position but we know that they are consecutive of next 1,2,3...
    arr[3] += 6;
    arr[2] = 1;
    cout<<arr[3];

    return 0;
}