#include <iostream>

using namespace std;

int main(){
int n,count(0),max(0);
cin>>n;

while(n>0){
    int last=n%10;
    if(max<=last){
        max=last;
        count++;
    }
    
    n/=10;

}
cout<<count;


}