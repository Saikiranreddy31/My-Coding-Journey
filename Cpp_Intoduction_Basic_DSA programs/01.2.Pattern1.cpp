#include<bits/stdc++.h>
using namespace std;
/* Points to solve any pattern
Pattern - Nested loops
Outer loops - Rows  and inner loops - Columns
   ****
   ****
   ****
   ****
1. for the outer loop,Count the no.of loops
2. for the inner loops,focus on the columns and connect them somehow to the rows
3.print the "*" inside the inner for loop
4.Observe symmetry (optional step)
*/
int main()
{
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++ ){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++ ){
//             cout<<"* ";
//         }
//     cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>> n;
//     print1(n)
//     return 0;
// }