#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    cout<<aptr<<endl; // ex - 2000

    aptr++; // for every increment 4bytes is the difference
    cout<<aptr<<endl; // ex = 2004 , 4bytes is the difference


    char ch='a';
    char *cptr=&ch;
    cout<<cptr<<endl;  // ex - 3000

    cptr++; 
    cout<<cptr<<endl; // ex - 3001 , char - 1byte

    return 0;
}