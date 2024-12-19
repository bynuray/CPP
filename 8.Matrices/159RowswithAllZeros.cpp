#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


int main(){

system("clear");

int n;
cin>>n;

int matrix[n][n];

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)    {
        cin>>matrix[i][j];
    }
    
}

int row_index;
for (int i = 0; i < n; i++){
bool isZero=true;
    for (int j = 0; j < n; j++)    {
        if(matrix[i][j]!=0){
            isZero=false;
            break;
        }
    }
    if(isZero==true){
        cout<<i+1<<" ";
    }
    
}
}