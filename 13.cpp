#include<iostream>
#include<vector>

using namespace std;

bool checkprime(int n)
{
	int x;
	while(n>0)
	{
		x=n%10;
		if(x!=2&&x!=3&&x!=5&&x!=7) return false;
		n/=10;	
	}
	return true;
}

int main()
{
	int n;
	vector <int> a;
	while(scanf("%d",&n)!=-1)
	{
		if(checkprime(n))
		{
			a.push_back(n);
		}
	}
	for(int i=0;i<a.size();i++)
	{
		int t=1;
		for(int j=i+1;j<a.size();j++)
		{
			if(a[j]==a[i])
			{
				t++;
				a.erase(a.begin()+j);
				j--;
			}
		}
		cout<<a[i]<<" "<<t<<endl;
	}
		

}

