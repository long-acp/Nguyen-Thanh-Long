#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	char str[100];
	gets(str);
	while(t--)
	{
		gets(str);
		char *pch=strtok(str," ");
		while(pch != NULL)
		{
			strlwr(pch);
			pch[0]=toupper(pch[0]);
			cout<<pch<<" ";
			pch= strtok(NULL," ");
		}
		
		cout<<"\n";
	}
}

