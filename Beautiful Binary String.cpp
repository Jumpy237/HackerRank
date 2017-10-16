#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n,cnt = 0;
	scanf("%d",&n);
	vector<pair<int,int> > p;
	string s;
	cin >> s;

	for(int i = 0; i < n - 2; ++i)
	{
		if(s[i] == '0' and s[i+1] == '1' and s[i+2] == '0')
		{
			p.push_back(make_pair(i,i+2));
		}
	}

	while(!p.empty())
	{
		if(p.size() >= 1 and p[0].second == p[1].first)
		{
			p.erase(p.begin(),p.begin()+2);
			cnt++;
		}
		else
		{
			p.erase(p.begin()+0);
			cnt++;
		}
	}
	printf("%d\n",cnt);
}
