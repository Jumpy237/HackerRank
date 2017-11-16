#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n,k;
	scanf("%d",&n);
	string s;
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	scanf("%d",&k);
	for(int i = 0; i < n; ++i)
	{
		if(isalpha(s[i]))
		{
			if(islower(s[i]))
			{
				printf("%c",alpha[((s[i]-'a')+k)%26]);
			}
			else
			{
				printf("%c",toupper(alpha[((tolower(s[i])-'a')+k)%26]));
			}
		}
		else
		{
			printf("%c",s[i]);
		}
	}
}
