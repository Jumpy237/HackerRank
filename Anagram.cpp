#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int tc,cnt;
	scanf("%d",&tc);
	string s;
	while(tc--)
	{
		cin >> s;
		cnt = 0;
		if(s.size()%2 == 0)
		{
			string a = s.substr(0,s.size()/2);
			string b = s.substr(s.size()/2);
			int cnt1[27] = {0};
			int cnt2[27] = {0};
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
				if(cnt1[i] > cnt2[i])
                {
                    int c = cnt1[i] - cnt2[i];
                    cnt += c;
                    cnt1[i] = cnt2[i];
                    for(int j = 0; j < 27; ++j)
                    {
                    	if(cnt1[j] < cnt2[j])
                    	{
                    		c -= cnt2[j] - cnt1[j];
                    		cnt1[j] += cnt2[j] -cnt1[j];

                    	}
                    }
                }
			}
            printf("%d\n",cnt);
		}
		else
		{
			printf("-1\n");
		}
	}
}
