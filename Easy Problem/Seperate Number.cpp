#include<bits/stdc++.h>
#include <string>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;
int next_length(string s)
{
	if(s[0] == 0)
	{
		return 0;
	}
	istringstream istr(s);
	long long n;
	istr >> n;
	string k;
	stringstream ss;
	ss << (n+1);
	k = ss.str();
	return k.size();
}
string next_int(string s)
{
	istringstream istr(s);
	long long n;
	istr >> n;
	string k;
	stringstream ss;
	ss << (n+1);
	k = ss.str();
	return k;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		string s;
		cin >> s;
		int end;
		//
		bool status = false;
		for(int i = 1; i < s.size() ; ++i)
		{
			end = i;
			string ffirst;
			string first = s.substr(0,end);
			ffirst = first;
			string next = s.substr(end,next_length(first));
			while(next == next_int(first))
			{
				end += next_length(first);
				first = next;
				next = s.substr(end,next_length(first));
			}
			if(end == s.size())
			{
				cout << "YES" << " " << ffirst << endl;
				status = true;
				break;
			}
		}
		if(!status)
		{
			cout << "NO" << endl;
		}
	}
}
