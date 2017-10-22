#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n,right_sum = 0,left_sum = 0;
		bool found = false;
		scanf("%d",&n);
		vector<int> v(n);
		for(int i = 0; i < n; ++i)
		{
			scanf("%d",&v[i]);
			right_sum += v[i];
		}
		for(int i = 0; i < n; ++i)
		{
			left_sum += v[i-1];
			right_sum -= v[i];
			if(left_sum == right_sum)
			{
				found = true;
				break;
			}
		}
		if(found)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
