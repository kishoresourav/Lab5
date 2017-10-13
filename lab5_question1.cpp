#include <iostream>
using namespace std;

int sum_elements(int ar[],int len)
{
int sum=0;
for(int i=0;i<len;i++)
sum=sum+ar[i];
return sum;
}

int main()
{
int n,sum;
cout<<"Enter the number of elements in the array : ";
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
{
cout<<"Enter "<<i<<" element of array : ";
cin>>ar[i];
}
sum=sum_elements(ar,n);
cout<<"The sum of elements of array = "<<sum<<endl;
return 0;
}
