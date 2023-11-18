/*
wap to input sides of triangle and check whethera triangle is equlateral,
scalence and isoscels triangle
*/
#include<iostream>
using namespace std ;
int main ()
{
    int a;
    cout<<"enter first side :";
    cin>>a;
    int b;
    cout<<"enter second side :";
    cin>>b;
    int c;
    cout<<"enter thired side :";
    cin>>c;
    if(a==b && a==c) cout<<"equilateral";
    else if (a==b || a==c|| b==c ) cout<<"isosceles";
    else cout <<"scalene";



}