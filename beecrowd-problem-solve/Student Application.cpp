#include<bits/stdc++.h>
using namespace std; 
int main(){
  int i ,n, sum=0; 
  cin>> n; 
  int marks[n];
  for(i=0; i<n; i++){
      
    cout<<"Student no : "<< i<< " "; 
    cin>> marks[i];
    sum+=marks[i];
  }
  float average = (float) sum/n; //type casting
  cout<< "Total Marks = "<< sum<<endl; 
  cout<< "Average is : "<<average<<endl;  
  int max = marks[0];
  int min = marks[0];
  
  for (int i=0; i<n; i++){
    
    if (max<marks[i]){
        max = marks[i];
    }
    if (min>marks[i]){
        min= marks[i];
    }
    
  }
  cout<< "the maximum is "<< max<<endl; 
    cout<< "the minimum is "<< min<<endl; 



return 0; 
}