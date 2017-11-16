#include<bits/stdc++.h>
using namespace std;
#define db(arg) cout << "debug : " << arg << endl;
int binary_search(vector<pair<int,int> > s,int left,int right,int k,int i)
{
	int mid = (left + right) / 2;
	if(right >= left)
	{
		if(k == s[mid].first && i != s[mid].second)
		{
			return mid;
		}
		else if(k < s[mid].first)
		{
			return binary_search(s,left,mid - 1,k,i);
		}
		else
		{
			return binary_search(s,mid + 1,right,k,i);
		}

	}
	return -1;
}
int main()
{
	int tc,tf;
	scanf("%d",&tc);
	while(tc--)
	{

		int m,n,v;
		scanf("%d",&m);
		scanf("%d",&n);
		vector<pair<int,int> > s;
		for(int i  = 0; i < n; ++i)
		{
			scanf("%d",&v);
			s.push_back(make_pair(v,i+1));
		}
		sort(s.begin(),s.end());
		for(int i = 0; i < n; ++i)
		{
//			cout << s[i].first << " " << s[i].second << endl;
			if(s[i].first < m)
			{
				int k = m - s[i].first;
				int found_index = binary_search(s,0,n-1,k,s[i].second);
				if(found_index != -1)
				{
					if(s[i].second < s[found_index].second)
					{
						cout << s[i].second << " " << s[found_index].second << endl;
					}
					else
					{
						cout << s[found_index].second << " " << s[i].second << endl;
					}
					break;
				}
			}
		}
	}
}
