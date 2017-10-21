#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;
bool find(string s,char c)
{
	for(int i = 0; i < s.size(); ++i)
	{
		if(c == s[i])
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; ++i)
	{
		string s1,s2;
		int cnt[27] = {0};
		bool ans = false;
		cin >> s1;
		cin >> s2;

		for(int i = 0; i < s1.size(); ++i)
		{
			cnt[s1[i] - 'a']++;
		}
		for(int i = 0; i < s2.size(); ++i)
		{
			if(cnt[s2[i] -'a'] > 0)
			{
				ans = true;
				break;
			}
		}
		if(ans)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
