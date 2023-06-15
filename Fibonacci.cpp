
#include <iostream>

using namespace std;

int main()
{
int a=1;
int b=1;
int temp;
 int n;
 cin>>n;
 //cout<<" 1 ";
  for( int i=2;i<=n;i++){
      temp=a+b;
    //  cout<<temp<<"  ";
      a=b;
      b= temp;
  }
cout<<temp;
    return 0;
}