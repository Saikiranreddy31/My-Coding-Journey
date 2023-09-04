// write a program to count the numbers of ones in binary representation of a number
#include<bits/stdc++.h>
using namespace std;

int numberofones(int n){
    int count=0;
    while(n){
        n=n & (n-1);
        count++;
    }
    return count;
}

int main()
{
    cout<<numberofones(19)<<endl; // 3
    return 0;
}