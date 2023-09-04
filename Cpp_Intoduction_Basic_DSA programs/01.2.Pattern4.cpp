#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++ ){
            cout<<"* ";
        }
    cout<<endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++ ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++ ){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=1;i<=n;i++){ //n-row+1
        for(int j =0;j<=n-i+1;j++){
            cout<<" *";//n-row+1
        }
        cout<<endl;

    }
}
void print6(int n){
    for(int i=1;i<=n;i++){ //n-row+1
        for(int j =1;j<=n-i+1;j++){
            cout<<j<<" ";//n-row+1
        }
        cout<<endl;

    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        // Space - (n-i-1)
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // Star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";

        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void print8(int n){
    for(int i=0;i<n;i++){
        // Space -  here space i=0 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // Star
        for(int j=0;j< 2*n-(2*i+1);j++){   // (2n-(2*i+1))
            cout<<"*";

        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }// 9th pattern combine both 7&8 patterns

}
void print10(int n){
    for(int i=1;i<=2*n-1;i++) {
        // (2*n-1) and decrease by (2*n-i)
        int stars=i;
        if(i>n) stars =2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>> t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print10(n);
    }
}