#include <iostream>

using namespace std;

int main(){
    system("clear");
    int n,r,a,b,gcd;
    cin>>n;
int lcm=1;
    for (int i = 1; i <= n; i++)    {
     a=lcm;
     b=i;
        while(a>0){
        r=b%a;
        b=a;
        a=r;
        }
        gcd=b;


lcm=(lcm*i)/gcd;

    }
    cout<<lcm;
    
}