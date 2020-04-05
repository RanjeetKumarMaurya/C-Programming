//triangle of numbers
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,val,k,l;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		val=i;
		for(j=1;j<=i;j++)
		{
			cout<<val;
			val++;
		}
		for(l=val-2;l>=i;l--)
		{
		  cout<<l;	
		}
		cout<<endl;
	}
	return 0;
}
