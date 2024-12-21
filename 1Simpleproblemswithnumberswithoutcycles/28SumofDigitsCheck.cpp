#include <iostream>

using namespace std;

int main(){

int num,d1,d2,d3,d4,sum;
    cin>>num;
    if(num>999 && num<10000){
         d1=num/1000;
       d2=(num/100)%10;
       d3=(num/10)%10;
       d4=num%10;
       sum=d1+d2+d3+d4;
       if(sum%6==0){
        cout<<"Multiple of 2 and 3"<<endl;
       }
else{
    cout<<"Not a Multiple of 2 and 3"<<endl;
}
}
}