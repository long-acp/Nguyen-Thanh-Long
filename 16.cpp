#include<iostream>
#include<string.h>


using namespace std;

int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 


int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		int val=0;
		for(int i=0;i<s.length();i++)
		{
			int s1 = value(s[i]);
			if(i+1<s.length())
			{
				int s2 = value(s[i+1]);
				if(s1>=s2) val+=s1;
				else
				{
					val+=s2-s1;
					i++;
				}
			}
			else val+=s1;
		}
		cout<<val<<endl;
	}

}

