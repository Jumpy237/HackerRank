#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;

int main()
{
	int height[26],max_height = 0;
	for(int i = 0; i < 26; ++i)
	{
		scanf("%d",&height[i]);
	}
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); ++i)
	{
		max_height = max(height[s[i] - 'a'],max_height);
	}
	cout << s.size() * max_height << endl;
}
