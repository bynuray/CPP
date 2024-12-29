#include <iostream>

using namespace std;

int main(){

int n,max(0);
cin>>n;

while(n>0){
int last=n%10;

if(max<last){
    max=last;
}
n/=10;
}
cout<<max;

}