// using double linked list , list stl is created

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    // To copy one list to another
    // list<int> n(l);
    list<int> n(5,1000);
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);
    // pop_back();
    // pop_front();
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"Size of list "<<l.size()<<endl;
    
    return 0;
}