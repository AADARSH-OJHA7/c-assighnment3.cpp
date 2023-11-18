//given the radius of circle,predict whether the numerically the area of this
// circle is larger than the circumfrences or not 
#include<iostream>
using namespace std;
int main (){
    int r;
    cout<<"enter the radius :";
    cin>>r;
    //area of circle = 3.14159*r*r
    //circumfrences = 2*3.14159*r*r
    float c = 2*3.1415942*r;
    float a = 3.1415942*r*r;
    if (a>c) cout<<"area > circumfrences";

    else if (c>a) cout<<"circumfrences>area";
    else cout<<"area = circumfrences";
    
}