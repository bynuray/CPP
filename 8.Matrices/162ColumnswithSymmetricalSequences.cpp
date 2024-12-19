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
    for (int j = 0; j < n; j++) {
 bool isPalindrome=true;
    for (int i = 0; i < n/2; i++)    {
      
  if(matrix[i][j]!=matrix[n-1-i][j]){
    isPalindrome=false;
    break;
 }
    }
    if(isPalindrome==true){
        cout<<j+1<<" ";
    }
    
 }

    

    

}