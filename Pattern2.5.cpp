void printPatt(int n)
{
    int n1,n2,i,j,k,l;
	cin>>n;
	n1=n/2+1;
	for(i=1;i<=n1;i++)      //triangle of stars
	{
		for(k=1;k<=n1-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	   n2=n/2+2;
	   l=1;
	for(i=n2;i<=n;i++)            //Inverted triangle of stars
	{
		if(n%2==0)
		{
			for(k=1;k<=l+1;k++)
		{
			cout<<" ";
		}
		l++;
		}
		else
		{
			for(k=1;k<=l;k++)
		{
			cout<<" ";
		}
		l++;
	}
		for(j=2*n-1;j>=2*i-1;j--)
		{
			cout<<"*";
		}
		cout<<endl;
    }
}


