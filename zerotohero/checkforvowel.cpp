#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int islowercasevowel,isuppercasevowel;
    cin>>c;
    islowercasevowel=c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    isuppercasevowel=c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    if(islowercasevowel||isuppercasevowel){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }
    return 0;
}