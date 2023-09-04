#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *aptr;
    aptr = &a;

    cout<<&a<<endl; // same
    cout<<aptr<<endl; // same

    cout<<*aptr<<endl; // 10 value of a

    return 0;
}
