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
		map<char,int> m;
		cnt = 0;
		cin >> s;
		for(int j = 0; j < s.size(); ++j)
		{
			if(m[s[j]] != 1)
			{
				cnt++;
				m[s[j]] = 1;
			}
		}
		printf("%d\n",cnt);
	}
}
