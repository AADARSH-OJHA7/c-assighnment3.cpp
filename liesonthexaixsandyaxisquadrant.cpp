#include<iostream>
using namespace std;
int main (){
 int x;
 cout<<"enter x cordinate :";
 cin>>x;
int y;
 cout<<"enter y cordinate :5
 ";
 cin>>y;
if(x==0 && y==0) cout<<"origin";
else if (x==0)cout<<"y axis";
else if (y==0)cout<<"x axis";
else if (x>0 && y>0) cout<<"1st quadrent ";
else if (x<0 && y>0) cout<<"2nd quadrent";
else if (x<0 && y<0) cout<<"3rd quadrent";
else cout <<"4th quadrent";






}