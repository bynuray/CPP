#include <iostream>

using namespace std;

int main(){
system("clear");
int n,m,digits,gcd(1),r;
cin>>n>>m;


// Without Euclidean Algorithm:
// for (int i = 2; i<=n && i<=m ; i++){
//     if(n%i==0 && m%i==0 ){
// gcd=i;

//     }
    
// }
// cout<<gcd;


//With Euclidean Algorithm:

//check which which num is greater
if(m>n){
m=m+n;
n=m-n;
m=m-n;
}
//Algorithm 
while(m>0){
    r=n%m;
    n=m;
    m=r;   
}
   cout<<n<<endl;



}
