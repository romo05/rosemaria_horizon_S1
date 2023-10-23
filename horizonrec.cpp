#include<iostream>
using namespace std;
int main()
{
    int num[100],check=0, i=0, j, sum=0;
    float avg;
    do
    {
        cout<<"Enter a number: ";
        cin>>num[i];
        if(i>0)
        {
            for(j=0; j<i; j++)
            {
                if(num[j]==num[i])
                {
                    cout<<"Number cannot be repeated\n";
                    goto label;
                }
            }
        }
        sum=sum+num[i];
        avg=(float)sum/(i+1);
        label: cout<<"Average= "<<avg;
        cout<<"\nStop: 1  Continue: 0 : ";
        cin>>check;
        i++;
    }while(check==0);
}
