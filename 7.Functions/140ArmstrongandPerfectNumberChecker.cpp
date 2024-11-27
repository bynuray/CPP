#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void Checker(int a){
int Orginal=a;
int armst(0);
int count(0);
int perfect(0);

int temp=a;
while(temp>0){
    count++;
    temp/=10;
}
temp=a;
while(temp>0){
int last=temp%10;
armst+=pow(last,count);
temp/=10;
    }
  if(armst==a){
    cout<<"The "<< a<<" is an Armstrong number."<<endl;
  }
  else{
    cout<<"The "<< a<<" is not an Armstrong number."<<endl;
  }

//=================================
temp=a;
for (int i = 1; i < temp; i++){
   if(temp%i==0){
    perfect+=i;
   }
}
   if(perfect==a){
    cout<<"The "<< a<<" is a Perfect number."<<endl;
  }
  else{
    cout<<"The "<< a<<" is not a Perfect number."<<endl;
  }
}


int main(){
    system("clear");
int n;
cout<<"Please add number: ";
cin>>n;

Checker(n);

}