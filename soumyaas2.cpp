#include<iostream>
using namespace std;
float pi=3.14;
class Volume
{
  public:
  float vol(float a)
  {
    return a*a*a;
  }
  float vol(float r,float h)
  {
    return pi*r*r*h; 
  }
  float vol(float l,float b,float h)
  {
    return l*b*h;
  }
};
int main()
{
 float l,b,h,r,h1,a;
 int c;
 Volume v;
 cout<<"Volume Calculation\n\n";
 cout<<"1.Cube\n2.Cuboid\n3.Cylinder\n";
 cout<<"Enter your choice whose volume you want to calculate:";
 cin>>c;
 switch(c)
 {
   case 1: 
        cout<<"Enter the side of the cube:";
        cin>>a;
        cout<<"Volume of cube is:"<<v.vol(a)<<"sq unit\n";
        break;
   case 2: 
        cout<<"Enter the length,breadth,and height of cuboid:";
        cin>>l>>b>>h;
        cout<<"Volume of cuboid is:"<<v.vol(l,b,h)<<"sq unit\n";
        break;
   case 3:
        cout<<"Enter the radius and height of cylinder:";
        cin>>r>>h1;
        cout<<"The volume of the cylinder is:"<<v.vol(r,h1)<<"sq unit\n";
        break;
   default:
        cout<<"Enter your choice between 1-3";
 }
 return 0;
  }
