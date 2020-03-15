#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int x=1;
	while(t--)
	{
		int N,M,p;
		cin>>N>>M>>p;
		int a[N+1],b[M+1];
		for(int i=0;i<N;i++)	cin>>a[i];
		for(int i=0;i<M;i++)	cin>>b[i];
		cout<<"Test "<<x<<":\n";
		for(int i=0;i<p;i++)	cout<<a[i]<<" ";
		for(int i=0;i<M;i++)	cout<<b[i]<<" ";
		for(int i=M+p;i<M+N;i++)	cout<<a[i-M]<<" ";
		cout<<endl;
		x++;
	}

}

