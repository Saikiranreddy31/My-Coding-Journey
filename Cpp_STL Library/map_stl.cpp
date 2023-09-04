// Map is a Key value pair
#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int,string>m;
    m[1]="babbar";
    m[2]="Love";
    m[13]="Kiran";
    m.insert({5,"Bheem"});

    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13 -> "<<m.count(13)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;
       for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);
    for(auto i=it;it!=m.end();i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}
// insert,erase,find,count O(logn) ordered here implementtaion using red black trees
// O(1) unordered using hash table O(1)

