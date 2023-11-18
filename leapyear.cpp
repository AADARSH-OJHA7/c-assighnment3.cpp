/* any year is input through the keyboard wap to determine whether the year is leap 
year or not
leap years occures after 4 years 

*/
#include<iostream>
using namespace std;
int main ()
{
int y;
cout<<"every year : ";
cin>>y;
if(y%400==0) cout<<"leap year";
else if (y%100==0) cout<<"not a leap year";
else if (y%4==0 ) cout<<"leap year ";
else cout<<"not a leap year";

/*
if (y%4==0) cout <<" leap year ";
else cout <<"not a leap year ";



*/



}