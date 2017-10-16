#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;
int main()
{

	int n,cnt_alpha[26] = {0},cnt = 0;
	string s;
	scanf("%d",&n);
	for(int i = 0; i < n; ++i)
	{
		cin >> s;
		bool found[27];
		memset(found,false,27);
		for(int j = 0; j < s.size(); ++j)
		{
			if(!found[s[i] - 'a'])
			{
				cnt_alpha[s[i] - 'a']++;
				found[s[i] - 'a'] = true;
			}
		}
	}
	for(int i = 0; i < 27; ++i)
	{
		if(cnt_alpha[i] == n)
		{
			cnt++;
		}
	}
	printf("%d\n",cnt);
}
