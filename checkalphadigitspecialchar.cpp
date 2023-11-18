#include<iostream>
using namespace std;
int main (){
char ch;
cout<<"enter a character";
cin>>ch;
int x= (int)ch;
if(x>=97 && x<=122) cout <<"small alphabet";
else if (x>=65 && x<=90) cout<<"capital alphabet";
else if (x>=48 && x<=57) cout<<"digit";
else cout<<"special char";







}