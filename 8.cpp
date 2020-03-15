#include<iostream>

using namespace std;

void tao(long long a[][10],int n)
{
	int p=0,k=n*n;
	long long x=0,y=1;
	while(k>=1)
	{
	//	a[0][0]=1;
		for(int j=p;j<n;j++)
		{
			a[p][j]=y;
			long long z = x+y;
			x=y;
			y=z;
			k--;
			
		}
		for(int i=p+1;i<n;i++)
		{
			a[i][n-1]=y;
			long long z = x+y;
			x=y;
			y=z;
			k--;
		}
		for(int j=n-2;j>=p;j--)
		{
			a[n-1][j]=y;
			long long z = x+y;
			x=y;
			y=z;
			k--;
		}
		for(int i=n-2;i>=p+1;i--) 
		{
			a[i][p]=y;
			long long z = x+y;
			x=y;
			y=z;
			k--;
		}
		p++,n--;
	}
	
}

void hienthi(long long a[][10],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	int x=1;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[10][10];
		tao(a,n);
		cout<<"Test "<<x<<":"<<endl;
		hienthi(a,n);
		x++;
	}

}

