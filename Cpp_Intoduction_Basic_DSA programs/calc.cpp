#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"Enter the numbers :"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"input an operator";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<< n1 + n2 <<endl;
        break;
    case '-':
        cout<< n1 - n2 <<endl;
        break;
    case '*':
        cout<< n1 * n2 <<endl;
        break;
    case '/':
        cout<< n1 / n2 <<endl;
        break;
    default:
    cout<<"Enter another operators"<<endl;
        break;
    }
    return 0;
}