#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int ar[3][3], n, i, j, d;
    float x=0, y=0, x1=0, y1=0;
    cout<<"Number of inputs: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
    cout<<"Enter the velocity of the body(unit/s): ";
    cin>>ar[i][0];
    cout<<"Enter the direction of motion of body(degree):";
    cin>>ar[i][1];
    cout<<"Enter the time interval (s): ";
    cin>>ar[i][2];
    }
    for(j=0; j<n; j++)
    {
        d=ar[j][0]*ar[j][2];
        x1=(float)d*cos((ar[j][1])*(3.14/180));
        //cout<<"\nx1= "<<x1;
        y1=(float)d*sin((ar[j][1])*(3.14/180));
        //cout<<"\ny1= "<<y1;
        if((ar[j][1])*(3.14/180)>=0)
        {
            x=(float)x+x1;
            //cout<<"\nx="<<x;
            y=(float)y+y1;
            //cout<<"\ny="<<y;
        }    
        else
        {
            x=(float)x-x1;
            y=(float)y+y1;
        }    
    }
    cout<<"\nPosition of body=("<<std::setprecision(5)<<x<<","<<std::setprecision(5)<<y<<")";
    return 0;
}
