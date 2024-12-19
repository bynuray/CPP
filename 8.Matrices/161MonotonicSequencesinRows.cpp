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
  bool isInc=false;
  bool isDec=false;  
    for (int j = 0; j < n-1; j++)    {
      if(matrix[i][j]<matrix[i][j+1] ){
       isInc=true;
       }
      else if(matrix[i][j]>matrix[i][j+1]){
        isDec=true;
       }
       else{
        isDec=false;
        isInc=false;
        break;
       }

    }    
    if(isDec==true && isInc==true){
        break;
    }
    else if(isDec==true || isInc==true){
        cout<<i+1<<" ";
    }


}



}