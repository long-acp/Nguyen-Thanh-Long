#include<iostream>

using namespace std;

void nhap(long long a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
}

bool xet(long long a[],int size)
{
	for(int i=0;i<=size/2;i++)
	{
		if(a[i]!=a[size-1-i]) return false;
	}
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		long long a[size];
		nhap(a,size);
		if(xet(a,size)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}

