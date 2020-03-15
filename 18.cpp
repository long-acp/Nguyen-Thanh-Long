#include<iostream>
#include<string.h>

using namespace std;

int check(string s,int index)
{
	int i=index+1,t=0;
	while(s[i]!=s[index])
	{
		i++;
	}
	for(int j=index;j<=i;j++)
	{
		for(int k=j+1;k<=i;k++)
		{
			if(s[k]==s[j]) t+=2;
		}
	}
	return i-index-t+1;
}

string tao(string s)
{
	string s1;
	for(int i=0;i<2*s.length();i++)
	{
		s1.push_back(s[i%s.length()]);
	}
	return s1;
}

int main()
{
	string s;
	cin>>s;
	s=tao(s);
	int val = 0;
	for(int i=0;i<s.length()/2;i++)
	{
		val+= check(s,i);
	}
	cout<<val/4;

}

