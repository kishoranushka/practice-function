// wap to check whether the given numbers are pythagorian triplet or not..

#include<iostream> 
#include<math.h>
 using namespace std; 
 float square(float n)
 {
    n=pow(n,2);
    return n;
 }
 int main()
 {
    float a,b,c,n;
    cout<<"enter the max number: " ;
    cin>>a;
    cout<<"enter the other two numbers: ";
    cin>>b>>c;
    a=square(a);
    b=square(b);
    c=square(c);
    if(a==(b+c))
    {
        cout<<"yes!..the given numbers are pythagorian triplet.";
    }
    else
    {
        cout<<"not pythagorian triplet.";
    }
    


return 0;
}
