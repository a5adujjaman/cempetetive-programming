#include<iostream>
#include<conio.h>
using namespace std;
 //// here the code is for taking input from user 
int main(){
  int x, y,num;
   // for number input
   cout<<" enter an integer number ";
   cin>> num;
   cout<<" this is an integer number " <<num<<"\n";
   
   // for character input 
   char j ;
   cout<<"enter your character " ;// character mean only one letter
   cin>>j; 
   cout<< "the entered character is " <<j << "\n";
   //string input 
   char k[20];
   cout <<"enter your string ";
   cin>> k;
   cout<< "your string is = "<< k;

getch();
}