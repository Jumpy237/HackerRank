#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int tc,n,h;
	scanf("%d",&tc);
	while(tc--)
	{
		h = 1;
		scanf("%d",&n);
		for(int i = 1; i <= n; ++i)
		{
			if(i % 2 == 0)
			{
				h++;
			}
			else
			{
				h *= 2;
			}
		}
		printf("%d\n",h);
	}
}
