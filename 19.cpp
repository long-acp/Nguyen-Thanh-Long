#include<iostream>
#include<cmath>

using namespace std;


int toprime(int n)
{
	if(n%2==1) return 0;
	int val=1,x=0;
	while (n%2 == 0) 
    { 
        x++;
        n = n/2; 
    } 
    val= val * x;
  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
		int y=1;	 
        while (n%i == 0) 
        { 
            y++; 
            n = n/i; 
        }
		val = val * y; 
    } 
    if(n>2) val = val*2;
	return val;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<toprime(n)<<endl;
	}

}

