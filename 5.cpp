#include<iostream>

using namespace std;

bool check(string s)
{
	if(s[0]-'0'+s[4]-'0'==s[8]-'0') return true;
	return false;
}

int main()
{
	
		string s;
		fflush(stdin);
		getline(cin,s);
		if(check(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	

}

