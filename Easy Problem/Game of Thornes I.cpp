#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	string s;
	cin >> s;
	int cnt[27] = {0};
	int cnt_odd = 0;
	for(int i = 0; i < s; ++i)
	{
		cnt[s[i]-'a']++;
	}
	for(int i = 0; i < 27; ++i)
	{
		if(cnt[i]%2 == 1)
		{
			cnt_odd++;
		}
	}
	if(cnt_odd <= 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

}
