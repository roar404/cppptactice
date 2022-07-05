#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max,min;
    if(a>b && a>c){
        max=a;
        min=b;
    }
    if(b>a && b>c){
        max=b;
        min=a;
    }
    if(c>a && c>b){
        max=c;
        min=a;
    }
 cout<<"max ="<< max <<"    "<<"min ="<< min <<endl;
 return 0;


}