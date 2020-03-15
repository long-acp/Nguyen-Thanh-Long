#include<iostream>

using namespace std;

void tao(int a[][20],int n)
{
	int p=0,k=n*n;
	while(k>=1)
	{
		for(int j=p;j<n;j++) a[p][j]=k--;
		for(int i=p+1;i<n;i++) a[i][n-1]=k--;
		for(int j=n-2;j>=p;j--) a[n-1][j]=k--;
		for(int i=n-2;i>=p+1;i--) a[i][p]=k--;
		p++,n--;
	}
	
}

void hienthi(int a[][20],int n)
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
		int a[20][20];
		tao(a,n);
		cout<<"Test "<<x<<":"<<endl;
		hienthi(a,n);
		x++;
	}

}

