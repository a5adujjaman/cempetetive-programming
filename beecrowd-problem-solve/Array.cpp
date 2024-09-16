#include<bits/stdc++.h>
using namespace std; 
int main(){
int num[]= {23, 34, 56, 65, 39};
cout << "the first one is "<< num[0]<<endl; 
cout << "the second one is "<< num[1]<< endl; 
cout << "the third one is "<< num[2]<< endl ; 
cout << "the fourth one is "<< num[3]<<endl; 
cout << "the fifth one is "<< num[4]; 
//now the another way is here 

for(int i = 0; i<=4; i++){
    cout<< "The output of array is "<<num[i]<<endl;
    
}
return 0; 
}