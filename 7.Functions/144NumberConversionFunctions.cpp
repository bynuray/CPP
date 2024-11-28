#include  <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

string convertToBinary(int num){
    string binary="";
    if(num==0) return "0";
    while (num>0)    {
    int convert=num%2;
        num/=2;
        binary+=to_string(convert);
    }
   reverse(binary.begin(),binary.end());
   return binary; 
}
string convertToOctal(int num){
    if(num==0) return "0";
    string octal="";
    while(num>0){
        int convert=num%8;
        num/=8;
        octal+=to_string(convert);
    }
    reverse(octal.begin(),octal.end());
    return octal;
}
string convertToHex(int num){
if(num==0) return "0";
    string hexdec="";
    while(num>0){
        int convert=num%16;
        num/=16;
        if(convert>=10 ){
        char letter='A'+(convert-10);
        hexdec+=letter;
        }
        else{
        hexdec+=to_string(convert);
        }
    }
    reverse(hexdec.begin(),hexdec.end());
    return hexdec;
    

}

int main(){
system("clear");
int decimal;
cin>>decimal;

string binary=convertToBinary(decimal);
string octal=convertToOctal(decimal);
string hex=convertToHex(decimal);

cout<<"Bin: "<<binary<<endl;
cout<<"Oct: "<<octal<<endl;
cout<<"Hex: "<<hex<<endl;

}