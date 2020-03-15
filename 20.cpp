#include<iostream>
#include<algorithm>

using namespace std;

bool check(int a[],int b[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>b[i]) return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	if(check(a,b,n)) cout<<"YES";
	else cout<<"NO";
}

