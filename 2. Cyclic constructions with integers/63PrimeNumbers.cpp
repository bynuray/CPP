#include <iostream>

using namespace std;

int main(){
    system("clear");
int n,m;
cin>>n>>m;

// if(m>n){
//     m=m+n;
//     n=m-n;
//     m-=n;
// }

//simply use swap function 
if(m>n){
    swap(m,n);
}

bool isPrime=true;

for (int i = m; i <= n; i++){
    isPrime=true;
    for (int j = 2; j < i; j++)    {
        if(i%j==0){
            isPrime=false;
        }
        
    }
    
if(isPrime==true){
    cout<<i<<" ";
}
}



}