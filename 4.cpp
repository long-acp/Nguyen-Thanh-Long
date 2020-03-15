#include<iostream>
#include<cmath>

using namespace std;

bool isprime(long long n)
{
	if(n<2) return false;
	if(n==2||n==3) return true;
	if(n%2==0||n%3==0) return false;
	for(long long i=5;i<=sqrt(n);i+=6)
	{
		if(n%i==0||n%(i+2)==0) return false;
	}
	return true;
}

void toprime(long long n)
{

	for(long long i=2;n!=1;i++)
	{
		if(isprime(i))
		{
			int x=0;
			while(n%i==0)
			{
				x++;
				n/=i;
			}
			if(x!=0) cout<<" "<<i<<"("<<x<<")";
		}	
		
	}

}

int main()
{
	int t;
	cin>>t;
	int x=1;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<"Test "<<x<<":";
		toprime(n);
		cout<<endl;
		x++;
	}

}

