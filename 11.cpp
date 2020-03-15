#include<iostream>
#include<string.h>

using namespace std;

char * chuanhoa(char* s)
{
	if(s[0]>=97&&s[0]<=122) s[0]-=32;
	for(int i=1;i<strlen(s);i++)
	{
		if(s[i]>=65&&s[i]<=90) s[i]+=32;
	}
	return s;
}

int main()
{
	int t;
	cin>>t;
	char str[51];
	gets(str);
	while(t--)
	{
		gets(str);
		char *pch,*s;
		pch= strtok(str," ");
		s=pch;
		pch= strtok(NULL," ");
		while(pch != NULL)
		{
			cout<<chuanhoa(pch);
			pch= strtok(NULL," ");    
			if (pch==NULL) cout<<", ";
			else cout<<" ";
		}
		
		cout<<strupr(s);
		cout<<endl;
	}
}

