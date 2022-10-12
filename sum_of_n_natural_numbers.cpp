// wap to find the sum of n natural numbers

#include<iostream> 
 using namespace std; 
 int natural(int n)
 {
    int sum=0,i;
     for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    cout<<"the sum of natural numbers upto "<<n<<" is "<<sum; 

 }
 int main()
 {
    int n,i,sum=0;
    cout<<"enter the number upto which you want the sum: " ;
    cin>>n;
   natural(n);
return 0;
}