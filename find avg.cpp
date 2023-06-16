/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
 double sum(int arr[], int n){
     double add=0;
     for( int i=0;i<n;i++){
         add=add+arr[i];
     }
     return add/n;
 }



int main()
{
     int n;
     cin>>n;
     
     int arr[n];
      for( int &x: arr){
          cin>>x;
      }
double ans= sum(arr, n);
 cout<<ans;
    return 0;
}




