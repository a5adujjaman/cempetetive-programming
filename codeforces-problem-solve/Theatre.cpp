#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int m, n, a;
    cin>> m>>n>>a;

    long long flagstone = ceil((double)m/a)*ceil((double)n/a);
    cout<<flagstone;
}