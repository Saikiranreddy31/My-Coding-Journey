#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not return anything
// return
// paramaterised
// Non parameterised

// void printName(){
//     cout<<"Hey SKR";
// }
// int main()
// {
//     printName();
//     return 0;
// }
void printName(string name){
    cout<<"Hey  "<<name<< endl;
}
int main()
{
    string name;
    cin>>name;
    printName(name);

    string name2;
    cin>>name2;
    printName(name2);

    return 0;
}