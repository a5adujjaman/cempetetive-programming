#include <bits/stdc++.h>
using namespace std;

int main()
{

    string first,second;
    int i, j;
    cin>>first>>second;

    for (int i=0 ; i<first.size(); i++ ){
        if (first[i]< 92){
            first[i] += 32;
        }
        if (second[i]<92){
            second[i] +=32;