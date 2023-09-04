#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job";

    }
    else if(age<=54){
        cout<<"Eligible for job";

    }
    else if(age<=57){
        cout<<"ELigible for job , but retirement soon";
    }
    else if(age>57){
        cout<<"retirement time";
    }

  return 0;
}
/* Nested if else
    if(age<18){
        cout<<"Not eligible for job";

    }
    // >=18
    else if(age<=57){
        cout<<"Eligible for job";
        if(age>=55){
            cout<<"ELigible for job , but retirement soon";
        }

    }
    else if(age>57){
        cout<<"retirement time";
*/