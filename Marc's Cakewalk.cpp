#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n;
	long long sum = 0;
	scanf("%d",&n);
	vector<long long> cal(n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%lld",&cal[i]);
	}
	sort(cal.rbegin(),cal.rend());
	for(int i = 0; i < n; ++i)
	{
		sum += cal[i] * pow(2,i);
	}
	printf("%lld",sum);
}
