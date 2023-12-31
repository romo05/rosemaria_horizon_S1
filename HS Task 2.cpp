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
    cout<<"\nEnter the velocity of the body(unit/s): ";
    cin>>ar[i][0]; 
    cout<<"Enter the direction of motion of body(degree): ";
    cin>>ar[i][1];
    cout<<"Enter the time interval (s): ";
    cin>>ar[i][2];
    }    
	d=ar[j][0]*ar[j][2]; //distance = velocity * timeinterval
        x1=(float)d*cos((ar[j][1])*(3.14/180)); //conversion of degree measure to radian measure
        y1=(float)d*sin((ar[j][1])*(3.14/180)); //conversion of degree measure to radian measure
        
        /* Position of a particle in two dimensional space is given by x= dcos(theta) and y=dsin(theta)
        where theta is the angle made with the positive direction of x axis*/
        
        x=(float)x+x1;
        y=(float)y+y1;
	}
    cout<<"\nPosition of body=("<<std::setprecision(5)<<x<<","<<std::setprecision(4)<<y<<")";
    return 0;
}
