// vector is a dynamic array
// if array size is 4 , when we want to enter 5 elements vector doubles the size
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    vector<int> a(5,1); // 5 size each element is assigned by 1

    // To copy elemets from one vector to another
    vector<int> last(a);

     cout<<"print a"<<endl;
     for (int i:a){
        cout<<i<<" ";
     }
     
     cout<<"print last"<<endl;
     for (int i:last){
        cout<<i<<" ";
     }
    cout<<"Capcaity ->"<<v.capacity()<<endl;
    // to aCapcaitylements into vector
    v.push_back(2);
    cout<<"Capcaity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capcaity -> "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    cout<<"Size-> "<<v.size()<<endl;

    cout<<"ELements at 2nd Index "<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
     for (int i:v){
        cout<<i<<" ";
     }cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
     for (int i:v){
        cout<<i<<" ";
     }cout<<endl;

    // To empty vector we use clear function
    // size becomes zero but not capacity
    
    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    return 0;
}