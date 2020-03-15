#include<bits/stdc++.h>

using namespace std;

bool check(string s)
{
	string temp=s;
	sort(s.begin(),s.end());
	if(s==temp) return true;
	reverse(s.begin(),s.end());
	if(s==temp) return true;
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		cin>>s;
		if(check(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	

}

