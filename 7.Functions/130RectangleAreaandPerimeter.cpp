#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


// By using references

// float Rectangle(int l,int w,float &A,float &P){
// A=l*w;
// P=(l+w)*2;
// return A;
// return P;
// }

// int main(){
// system("clear");
// int width;
// int length;
// float Area;
// float Perimetr;
// cin>>length;
// cin>>width;

// if((length>=1 && length<=100)&&(width>=1 && width<=100)){
// float res=Rectangle(length,width,Area,Perimetr );
// cout<<"The area of the rectangle is: "<<Area<<endl;
// cout<<"The perimeter of the rectangle is: "<<Perimetr<<endl;
// }
// else{
// cout<<"plase change width or lenth of rectange between 1 to 100"<<endl;
// }

// }

// <--->---<--->---<--->---<--->---<--->---<--->---<--->---<--->--<--->---,----.--->---<---<-----------------------------------------------------------------------------------

// new one for me (structure)

// struct Reactangleinfo{
//    float Area;
//    float Perimetr;
// };


// Reactangleinfo Rectangle_structure(float a,float b){
//    Reactangleinfo info; //info is just name you can change it with others Example info-->rec then rec.Area and rec.Perimetr and return rec
//    info.Area=a*b;
//    info.Perimetr=(a+b)*2;
//    return info;

// }


// int main(){
//    float l;
//    float w;
//    cin>>l;
//    cin>>w;
//    if((l>=1 && l<=100)&&(w>=1 && w<=100)){

// Reactangleinfo rec=Rectangle_structure(w,l);
// cout<<"The area of the rectangle is: "<<rec.Area<<endl;
// cout<<"The perimeter of the rectangle is: "<<rec.Perimetr<<endl;

//    }
//    else{
//       cout<<"plase change width or lenth of rectange between 1 to 100"<<"/n";
//    }
// }



