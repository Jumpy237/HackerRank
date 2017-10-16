#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int cnt1[27] = {0};
	int cnt2[27] = {0};
	int ans = 0;
	string a,b;
	cin >> a;
	cin >> b;
	for(int i = 0; i < a.size(); ++i)
	{
		cnt1[a[i]-'a']++;
	}
	for(int i = 0; i < b.size(); ++i)
	{
		cnt2[b[i]-'a']++;
	}
	for(int i = 0; i < 27; ++i)
	{
		ans += abs(cnt1[i] - cnt2[i]);
	}
	printf("%d\n",ans);
}
