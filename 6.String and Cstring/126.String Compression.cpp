#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<cstring>

using namespace std;

int main(){

// 126.
int n=1000,count(1);
char msg[n];
cin.getline(msg,n);

char voidArr[n];
int index=0;

for (size_t i = 0; i < strlen(msg); i++){

if(msg[i]!=msg[i+1]){
    count=1;
    voidArr[index++]=msg[i];
}
else{
    count++;
}

}
voidArr[index]='\0';
cout<<voidArr<<count;

}
