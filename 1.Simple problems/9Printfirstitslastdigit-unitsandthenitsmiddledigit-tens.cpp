#include <iostream>

using namespace std;

int main(){

   int num,lastd,midd;
    cin>>num;
    if(num>99 && num<1000){
        lastd=(num%100)%10;
        midd=(num/10)%10;
        cout<<"Last digit (units): "<<lastd << endl;
            cout<<"Middle digit (tens): "<<midd << endl;
    }
    else{
        cout<<"please add 3-d number"<<endl;
    }
}