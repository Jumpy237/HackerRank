#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n,cnt;
	string s;
	scanf("%d",&n);
	for(int i = 0; i < n; ++i)
	{
		cnt = 0;
		cin >> s;
		for(int j = 0; j < s.size()/2; ++j)
		{
			if(s[j] != s[s.size()-j-1])
			{
				cnt += abs(s[j]-s[s.size()-j-1]);
			}
		}
		printf("%d\n",cnt);
	}
}
