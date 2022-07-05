#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sidea,sideb,sidec;
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb && sideb==sidec){
        cout<<"Equilateral"<<endl;
    }
    else if(sidea==sideb || sideb==sidec || sidec==sidea){
        cout<<"Isosceles"<<endl;
    }
    else{
        cout<<"Scalene"<<endl;
    }
    return 0;
}