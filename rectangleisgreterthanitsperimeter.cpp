/* given the length and bredth of a reatcangle wap to find of the
whether numerically  the area of the rectangle is greater then 
its perimeter
*/
#include<iostream>
using namespace std;
int main (){
 cout<<"enter the length :";
 int l ;
 cin>>l;
cout<<"enter the breadth :";
 int b ;
 cin>>b;
 int a = l*b;
 int p = 2*(l+b);
 if (a>p)cout<<"area>perimeter";
 else if (a<p)cout<<"area < perimeter";
 else cout <<"area = circumfrences ";



}