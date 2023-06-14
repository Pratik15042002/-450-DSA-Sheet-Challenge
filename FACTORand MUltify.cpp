// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    
    for( int i=2;i<n;i++){
        if(n%i==0){
            return false;
            }
        }
        return true;
    
}
void primefactor( int n){
    for( int i=2;i<n;i++){
        if(isprime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<"  ";
                x=x*i;
            }
        }
    }
}
int main() {
  
 int n;
 cin>>n;
 primefactor(n);

    return 0;
}