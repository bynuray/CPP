#include <iostream>

using namespace std;

int main (){
    int n,sum(0);
    cin>>n;

//     while(n>0){
// int last=n%10;
// sum+=last;
// n/=10;
//     }
//     cout<<sum<<endl;

for (; n!=0;n/=10){
    int last=n%10;
    sum+=last;
}
cout<<sum<<endl;


}