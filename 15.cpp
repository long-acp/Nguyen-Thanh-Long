#include<iostream>

using namespace std;

int check(int a[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				return a[i];
			}
		}
	}
	return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		if(check(a,n)!=-1) cout<<check(a,n)<<endl; 
		
		else cout<<"NO"<<endl;
	}

}

