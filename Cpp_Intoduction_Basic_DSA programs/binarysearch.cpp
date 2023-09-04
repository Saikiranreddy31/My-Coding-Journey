#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
// Time complexity , n , n/2 , n/4 , n/2^k 
// O(logn2) logn base 2

 int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<BinarySearch(arr,n,key)<<endl;
    return 0;
}