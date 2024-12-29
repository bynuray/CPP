#include <iostream>

using namespace std;

int main(){
    int n,count(0);
    cin>>n;
//if count is not equal to 0 it get some trash or garbage value and doesn't give the real answer and 
//why 0? because counting start from the 0
    while(n>0){
        n/=10;
        count++;
        
    }
    cout<<count<<endl;
}