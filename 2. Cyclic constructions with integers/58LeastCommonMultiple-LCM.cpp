#include <iostream>

using namespace std;

int main(){
    system("clear");
    int a,b,lcm,maxNum,r(0),gcd;
    cin>>a>>b;
int temp=a*b;
maxNum=a;
if(b>a){
    b=a+b;
    a=b-a;
    b-=a;
    maxNum=b;
}

// 1.
    // for (int i = a*b; i >1 ; i--)    {
    //     if(i%a==0 &&i%b==0){
    //         lcm=i;
    //     }
    // }
    // cout<<lcm;

// 2.
    // for (int i = maxNum; ; i+=maxNum)    {
    //         if(i%a==0 &&i%b==0){
    //         lcm=i;
    //         break;
    //     }
    // }
    // cout<<lcm;

// 3.
//LCM can find usin GCD LCM(a,b)=|a*b| / GCD(a,b)

while(b>0){
r=a%b;
a=b;
b=r;
}
gcd=a;
lcm=temp/gcd;
cout<<lcm;

    }
    
