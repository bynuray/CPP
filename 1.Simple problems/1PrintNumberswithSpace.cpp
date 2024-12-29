#include <iostream>


using namespace std;

int main(){
    system("clear");
int n;
cin>>n;

int last=n%10;
int first=n/100;
int mid1=n/10;
int mid2=mid1%10;

cout<<first<<" "<<mid2<<" "<<last;



}