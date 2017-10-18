#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n,m,v;
	scanf("%d",&n);
	int cnt_a[10007] = {0};
	for(int i = 0; i < n; ++i)
	{
		scanf("%d",&v);
		cnt_a[v]++;
	}
	scanf("%d",&m);
	int cnt_b[10007] = {0};
	for(int i = 0 ; i < m; ++i)
	{
		scanf("%d",&v);
		cnt_b[v]++;
	}
	for(int i = 0; i <= 10000; ++i)
	{
		if(cnt_a[i] != cnt_b[i])
		{
			cout << i << " ";
		}
	}
}
