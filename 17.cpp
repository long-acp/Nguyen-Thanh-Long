#include<iostream>
#include<cmath>

using namespace std;

int a,b,c,d,e,f;

int check(int x)
{
	int a=sqrt(x);
	if(a*a==x) return a;
	return -1;
}

bool hv()
{
	int s=a*b+c*d+e*f;
	int y=check(s);
	if(y==-1) return false;
	if(a>b) swap(a,b);
	if(c>d) swap(c,d);
	if(e>f) swap(e,f);
	if(b==d && d==f && f==y) return true;
	if(d==y) {swap(a,c); swap(b,d);}
	if(f==y) {swap(a,e); swap(b,f);}
	if(b==y)
	{
		a=y-a;
		if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  return true;
		return false;
	}		
	return false;
	
}

int main()
{
	
	cin>>a>>b>>c>>d>>e>>f;
	
	if(hv()) cout<<"YES";
	else cout<<"NO";
	

}

