#include  <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

//how to do with sort algorithm
string Anagram(string s1,string s2){
if(s1.length()!=s2.length()){
      return "Not Anagram";
}
string sortS1=s1;
   string sortS2=s2;
   sort(sortS1.begin(),sortS1.end());
   sort(sortS2.begin(),sortS2.end());

   
   return (sortS1==sortS2) ?"Anagram": "Not Anagram";
   
}

int main(){

string first;
string second;
cin>>first>>second;

string aang=Anagram(first,second);

cout<<aang<<endl;

}