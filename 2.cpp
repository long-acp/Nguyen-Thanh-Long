#include<iostream>

using namespace std;

bool contest(long long n)
{
	int x=n%10;
	int y=0;
	while(n>0)
	{
		y=n%10;
		n/=10;
	}
	if(x==y) return true;
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if(n>0&&n<10) cout<<"NO"<<endl;
		else
		{
			if(contest(n)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}

}

