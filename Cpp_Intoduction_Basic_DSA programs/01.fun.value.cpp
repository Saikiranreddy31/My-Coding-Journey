#include<bits/stdc++.h>
using namespace std;


// pass by value
int doSomething(int num){
    cout << num <<endl;
    num+=5;
    cout << num << endl;
    num+=10;
    cout <<num<<endl;
}
int main()
{
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}

// void doSomething(string s){
//     s[0] = 't';
//     cout <<s<<endl;
// }
// int main()
// {
//     string s = "raj"
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }
// prints taj raj


// pass by Reference
// void doSomething(string &s){   // & takes the addresss
//     s[0] = 't';
//     cout <<s<<endl;
// }
// int main()
// {
//     string s = "raj"
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }

// prints taj taj