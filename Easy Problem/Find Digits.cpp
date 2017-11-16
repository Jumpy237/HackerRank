#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k,cnt = 0;
        cin >> n;
        k = n;
        while(n > 0)
        {
            if(n % 10 != 0 and k % (n%10) == 0)
            {
                cnt++;
            }
            n /= 10;
        }
        cout << cnt << endl;

    }
}
