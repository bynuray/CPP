#include <iostream>

using namespace std;

int main(){

    int num,fd,ld,md;
    cin>>num;
    if(num>99 && num<1000){
    ld=(num%100)%10;
    md=(num/10)%10;
    fd=num/100;
     if(ld==0 && md!=0){
            cout<<md<<fd<<endl;
        }
        else if (ld==0 && md==0){
            cout<<fd<<endl;
        }
else{
    cout<<ld<<md<<fd<<endl;
}





}
}