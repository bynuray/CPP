#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int Sum(int a,int b=0,int c=0,int d=0){
    return a+b+c+d;
    
}

int main(){
system("clear");
        int a,b,c,d;
    cin>>a>>b>>c>>d;
    int res=Sum(a,b,c,d);
    cout<<res<<endl;

}