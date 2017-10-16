#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int n;
	cin >> n;
	string s;
	for(int i = 0; i < n; ++i)
	{
		cin >> s;
		int j = 0;
		string ss = "";
		while(j < s.size() - 1)
		{
			if(s[j] != s[j + 1])
			{
				ss += s[j];
			}
			j++;
		}
		ss += s[s.size() - 1];
		cout << s.size() - ss.size() << endl;
	}
}
