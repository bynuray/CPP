#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


int main(){

system("clear");

 int n;
 cin>>n;

int matrix[n][n];

 for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)    {
        cin>>matrix[i][j];
    }
    
 }
 
    
for (int i = 0; i < n; i++) {
    bool isEqual=false;
    for (int j = 0; j < n; j++)    {
        if(matrix[i][j]==matrix[i][j+1]){
           isEqual=true;
        }
    }
    if(isEqual==true){
        cout<<i+1<<" ";
    }

 }
  

    



}