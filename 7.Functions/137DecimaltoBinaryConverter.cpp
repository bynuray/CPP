#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int DectoBinary(int a){
    int convert;
    while(a>0){
convert=a%2;
a/=2;

for (int i = 0; i < a; i++){
    if(convert==0){
    cout<<0;
}
if(convert==1){
    cout<<1;
}
}


    }



} 


int main(){
system("clear");
int num;
cin>>num;

cout<<DectoBinary(num);

}