// wap to convert the octal number into decimal number

#include<iostream>
#include<math.h> 
 using namespace std; 
 int octaltodecimal(int n)
 {
    int i,sum=0,temp;
    int x=1;
    while(n>0)
    {
        temp=n%10;
        if(temp==0||temp==1||temp==2||temp==3||temp==4||temp==5||temp==6||temp==7)
        {
        sum=sum+(temp*x);
        x=x*8;
        n=n/10;

        }
        else
        {
            cout<<"invalid number....enter another number";
            break;
        }
    }
    return sum;
 }
 int main()
 {
    int n;
    cout<<"enter any octal number: " ;
    cin>>n;
    cout<<octaltodecimal(n);


return 0;
}