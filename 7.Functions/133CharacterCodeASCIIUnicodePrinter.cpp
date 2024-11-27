#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int Convert(char character){
int number=character;
return number;
}


int main(){

char character;
cin>>character;

int con=Convert(character);
cout<<"The ASCII value of "<<character<<" is:"<<con<<endl;
cout<<"The character for the ASCII value "<<con<<" is: "<<character<<endl;

}