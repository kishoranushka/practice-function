// wap to convert the given binary number to decimal number.

#include <iostream>
#include <math.h>
using namespace std;
int binarytodecimal(int n)
{
    int i,sum=0,x=1,temp;
    while(n>0)
    {
        temp=n%10;
        if(temp==1 || temp==0)
        {
        sum=sum+(temp*x);
        x*=2;
        n=n/10;
        }
        else{
            cout<<"invalid  number...enter another number.";
            break;
        }

    }
  return sum;
}

int main()
{
    int n;
    cout << "enter any binary number: ";
    cin >> n;
    cout << binarytodecimal(n);
    return 0;
}