// Hashing map insertion , deletion , traversing
#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    // creation 
    unordered_map<string,int> m;

    // insertion
    // 1
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);

    // 2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    // 3
    m["mera"] = 1;

    // what will happen --> key single entry it will update the index value it will not allow duplicate
    m["mera"] = 2;

    // Search
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    // cout << m.at("unknownkey") << endl; here it gives abort or error
    cout << m["unkonwnkey"] << endl;
    // cout << m.at("unknownkey") << endl; here it gives 0

    // size
    cout << m.size() << endl;

    // to check presence
    // count gives 1 in case of presence
    // count gives 0 in case of absence
    cout << m.count("lovel") << endl;

    // earse
    m.erase("love");
    cout << m.size() << endl; 

    // To access all elements in hash 
    // 1
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    // 2 way is using iterator
    // if we use map we get order sequence same as we given input
    // unordered_map we get randomly
    unordered_map<string,int> :: iterator it = m.begin();

    while (it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
     }

    return 0;
}
