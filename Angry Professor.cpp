#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int tc,k,n,cnt,v;
	scanf("%d",&tc);
	while(tc--)
	{
		cnt = 0;
		scanf("%d %d",&n,&k);
		for(int i = 0; i < n; ++i)
		{
			scanf("%d",&v);
			if(v <= 0)
			{
				cnt++;
			}
		}
		if(cnt < k)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
