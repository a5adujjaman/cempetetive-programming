#include<bits/stdc++.h>
using namespace std;
int main()
{
    string first;
    string second;
    cin >> first ;
    cin >> second ;

    if (first > second){
        cout<<"1";
    }
    else if(second>first){
        cout<<"-1";
    }
    else{
        cout<<"0";
    }
}