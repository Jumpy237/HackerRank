#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n;
	scanf("%d",&n);
	int days[n];
	int sum = 2;
	days[1] = 2;
	for(int i = 2; i <= n; ++i)
	{
		days[i] = (days[i-1] * 3) / 2;
		sum += days[i];
	}
	printf("%d\n",sum);
}
