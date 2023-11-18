//colinearpoints
#include<iostream>
using namespace std;
int main (){
float x1,y1,x2,y2,x3,y3;
 cout<<"enter 1st point :";
 cin>>x1>>y1;
cout<<"enter 2nd point :";
 cin>>x2>>y2;
cout<<"enter 3rd point :";
 cin>>x3>>y3;
float m1=(y2-y1)/(x2-x1);
float m2=(y3-y2)/(x3-x2);
if(m1==m2) cout<<"colinear";
else cout<<"non colinear";




}