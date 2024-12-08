#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;


int main(){

system("clear");

int r,c,count(0);
cout<<"please add r(row) and c(column) "<<endl;
cin>>r>>c;

int matrix[r][c];

for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++)    {
        cin>>matrix[i][j];
    }
    
}
int size=r*c;

//static arr
//int arr[size]={0};
// int index=0;

//dynamic arr
int *arr=new int[size];
int index=0;

bool isUnique=true;
for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++)    {
       isUnique=true;
       for (int p = 0; p < index; p++)       {
        if(matrix[i][j]==arr[p]){
    isUnique=false;
    break;    
       }
       }
    if(isUnique==true){
        arr[index]=matrix[i][j];
index++;
count++;
    }
    }
    
}
//index==count
cout<<index<<endl;

delete[] arr;//delete dynamic array after for free the memory
}