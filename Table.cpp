/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void table( int n, int m){
    for( int i=1;i<=m;i++){
        
        int r=n*i;
       cout<< r<<endl;
    }
    
}

int main()
{
int n;
cin>>n;
int m; 
cin>>m;
 
table(n ,m);
    return 0;
}