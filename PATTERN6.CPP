#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int i,j,n,sp,k=0;
cout<<endl<<"Enter the no of rows:";
cin>>n;
for(i=n;i>=1;i--)
{
sp=(2*k);
for(j=1;j<=i;j++)
{
cout<<j;
}
for(j=1;j<sp;j++)
{
cout<<" ";
}
for(j=i;j>=1;j--)
{
if(j==n)
continue;
else
cout<<j;
}
cout<<endl;
k++;
}
getch();
}