#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main(){

system("clear");

int r,c;
cout<<"please add r(row) and c(column) "<<endl;
cin>>r>>c;

int matrix[r][c];

for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++)    {
        cin>>matrix[i][j];
    }
    
}

int max=matrix[0][0];
int index_i;
int index_j;
for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++)    {
 if(matrix[i][j]>max){
    max=matrix[i][j];
    index_i=i;
    index_j=j;
 }
    }  
}

cout<<"Maximum: "<<max<<" "<<index_i<<" "<<index_j<<endl;

}