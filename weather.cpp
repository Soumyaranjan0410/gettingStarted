#include<iostream>
using namespace std;
const int MAX=31;
class Weather
{
public:
int hightemp, lowtemp, rainamt, snowamt;
float avghightemp;
float avglowtemp;
float avgrainamt;
float avgsnowamt;
Weather()
{
hightemp=0;
lowtemp=0;
rainamt=0;
snowamt=0;
avghightemp=0;
avglowtemp=0;
avgrainamt=0;
avgsnowamt=0;
}
void getinfo()
{
cin>>hightemp;
cin>>lowtemp;
cin>>rainamt;
cin>>snowamt;
}
};
int main()
{
Weather wt[MAX];
static int a,b,c,d,count;
int n=1,i;
char ans;
do
{
cout<<"Enter high temp, enter low temp, enter amount of rain, enter amount of snow"<<n;wt[n].getinfo();
count++,n++;
cout<<"Do you wish to take values for another day(y/n)?";
cin>>ans;
}
while(ans!='n');  
for(i=0;i<count;i++)
{
a=a+wt[i].hightemp;
b=b+wt[i].lowtemp;
c=c+wt[i].rainamt;
d=d+wt[i].snowamt;
}
a=a/count;
b=b/count;
c=c/count;
d=d/count;
cout<<"Avg high temp value\t"<<a<<"\tdegree celcius"<<endl;
cout<<"Avg low temp value\t"<<b<<"\tdegree celcius"<<endl;
cout<<"Avg rainfall\t\t"<<c<<"\tmm"<<endl;
cout<<"Avg snowfall\t\t"<<d<<"\tmm"<<endl;
return 0;
}

