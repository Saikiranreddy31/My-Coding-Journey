#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    // Form the biggest number from the numeric string
    // "53214" -> "54321"
    string s = "4786242289";
    
    sort(s.begin(),s.end(),greater<int>());
                           // greater<char>() can also used
    cout<<s<<endl;


    return 0;
}