#include<iostream>
using namespace std;
class volume
{
    public:
           
             int l,b,h,vol;
             void input()
                         {
                         cout<<"Enter the length of the object:";
                         cin>>l;
                         cout<<"Enter the breadth of the object:";
                         cin>>b;
                         cout<<"Enter the height of the object:";
                         cin>>h;
                         }
             void output()
                         {
                         vol=l*b*h;
                         cout<<"The Volume of the object is:"<<vol;
                         }
                           
           
};
int main()
{
  volume v;
  v.input();
  v.output();
  return 0;
}
