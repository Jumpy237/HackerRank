#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n,m,cnt = 0;
	scanf("%d %d",&n,&m);
	vector<int> price(n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d",&price[i]);
	}
	sort(price.begin(),price.end());
	for(int i = 0; i < n; ++i)
	{
		if(m - price[i] >= 0)
		{
			cnt++;
			m -= price[i];
		}
		else
		{
			break;
		}
	}
	printf("%d\n",cnt);
}
