#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Striver"; // char at every index
    int len = s.size(); 
    s[len-1] = 'z'; //" " - doesnt work
    cout<<s[len-1];
    return 0;
}