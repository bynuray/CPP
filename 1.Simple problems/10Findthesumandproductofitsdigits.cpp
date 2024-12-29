#include <iostream>

using namespace std;

int main(){

    int n(123),last,mid,first,sum(0),product(1);
    

first=n/100;
int temp=n/10;
mid=temp%10;
last=n%10;

sum=first+mid+last;
product=first*mid*last;

cout<<"Sum of the digits: "<<sum<<endl;
cout<<"Product of the digits: "<<product<<endl;


}