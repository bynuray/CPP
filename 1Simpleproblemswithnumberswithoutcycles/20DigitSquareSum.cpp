#include <iostream>
#include <cmath>  //or math.h
//when i enter n=12345 answer becomes 54 but it should be 55 the reason is the pow  which meast that pow is designed for floaat type integers
// so instead pow you can just make x*x style 

using namespace std;

int main(){

int num,d1,d2,d3,d4,d5,sum;
    cin>>num;
    if(num>9999){
        d1=pow(num/10000,2);
        d2=pow((num/1000)%10,2);
        d3=pow((num/100)%10,2);
        d4=pow((num%100)/10,2);
        d5=pow(num%10,2);
        sum=d1+d2+d3+d4+d5;
        cout<<sum<<endl;

}
}