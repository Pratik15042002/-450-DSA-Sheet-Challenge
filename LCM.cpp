#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a;
    int b;
    cin>>a>>b;
    
    int v=max(a,b);
    int k=min(a,b);
    int r=a*b/2;
    for(int i=1;i<=r;i++){
        int ans= v*i;
       for(int j=1;j<=r;j++){
            if(k*j==ans){
            cout<<ans;
        i=r+1;
            break;
        }
        
    }
}
    return 0;
}

/*
#include <iostream>
using namespace std;

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b) {
    int gcdValue = gcd(a, b);
    int lcmValue = (a * b) / gcdValue;
    return lcmValue;
}

int main() {
    int a, b;
    cin >> a >> b;

    int lcmValue = lcm(a, b);
    cout << "LCM: " << lcmValue << endl;

    return 0;
}*/
