#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    cin >> num1 >> num2;
    int minimum = min(num1,num2);
    cout << minimum <<endl;
    int maximum = max(num1,num2);
    cout << maximum;
    return 0;
}
// int maxx(int num1, int num2){
//     //5>=6 false
//     if(num1>=num2){
//         return num1;
//     }
//     return num2
//     // looking for a return line
// }
// int main()
// {
//     int num1,num2;
//     cin >> num1 >> num2;
//     int maximum = max(num1,num2);
//     cout << maximum;
//     return 0;
// }