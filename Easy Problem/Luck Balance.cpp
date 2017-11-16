#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n,k,sum = 0;
	scanf("%d %d",&n,&k);
	vector<pair<int,int> > v(n);
	vector<int> imp;
	for(int i = 0; i < n; ++i)
	{
		int a,b;
		scanf("%d %d",&a,&b);

		v[i].first = a;
		v[i].second = b;
		sum += v[i].first;
		if(v[i].second == 1)
		{
			imp.push_back(v[i].first);
		}
	}
	sort(imp.begin(),imp.end());
	for(int i = 0; i < (int)imp.size() - k; ++i)
	{

		sum -= 2 * imp[i];
	}
	printf("%d\n",sum);
}
