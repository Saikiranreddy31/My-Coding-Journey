// Replace pi with 3.14 in string
//"pippppiiiipi"
#include<bits/stdc++.h>
using namespace std;

void ReplacePi(string s){
    if(s.length()==0){// base case
        return ;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        ReplacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        ReplacePi(s.substr(1));
    }

}

int main(){
    ReplacePi("pippppiiiipi");
    return 0;
}
