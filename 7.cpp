#include<iostream>
using namespace std;

void input(int a[][100],int n,int m) 
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
}

void cvi(int a[][100],int b[][100],int n,int m) 
{
	for(int i = 0; i < n; i++) 
	{
		for(int j = 0; j < m; j++) 
		{
			b[j][i] = a[i][j];
		}
	}
}
void tich(int a[][100],int b[][100],int c[][100],int n,int m) 
{
	for(int i = 0; i < n; i++) 
	{
		for(int j = 0; j < n; j++)
		{
			c[i][j]=0;
			for(int l = 0; l < m; l++) 
			{
			    c[i][j] += a[i][l] * b[l][j];
			}
	}
}
	for(int i = 0; i < n; i++) 
	{
		for(int j = 0; j < n; j++) 
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}

int main() 
{
	int t;
	cin>>t;
	int x=1;
	while(t--)
	{
		
		int a[100][100];
		int b[100][100];
		int c[100][100];
		int n,m;
		cin >> n >> m;
		
		input(a,n,m);
		cvi(a,b,n,m);
		cout<<"Test "<<x<<":"<<endl;
		tich(a,b,c,n,m);
		x++;
	}
}
