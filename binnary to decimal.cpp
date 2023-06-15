
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
      cin>>n;
      
      int val=0;
      int base=1;
      
     while(n>0){
         int last=n%10;
         val=val+(last*base);
         n=n/10;
         base=base*2;
     }
    cout<<val;
}