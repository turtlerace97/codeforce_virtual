
/*
*   Time :
*   Subject : dp
* 
*	dp[i][j] : i�� ������ ���� �� i+1��° ���Ұ� j�� ���� ���� 
*	-90000<= j <= 90000 
*	
*	���� ���´� ���� ���¿� ������ ������ ���� �ش�. 
*	��������� ���� ���ϰų� ���ų�
* 
*	dp[i][j] -> dp[i+1][v[i+2]-j] or dp[i+1][v[i+2]+j]
*	
*	j==0 �� ��� �ΰ����� ������ �ѹ��� �������ָ� �ȴ�. 
*	
*
*   Coded by soonyubing
*/

#include <bits/stdc++.h>
#define ll long long
#define pii  pair<int, int>
#define pll pair<ll, ll>
// INT_MAX INT_MIN LLONG_MAX LLONG_MIN
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

const int mod = 998244353;
const int k = 90000;
int dp[333][200000];

void solve()
{
	int n; cin >> n;
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) cin >> v[i];

	dp[2][v[3] - v[2] + k] = 1;
	dp[2][v[3] + v[2] + k] = 1;

	for (int i = 3; i <= n - 1; i++)
	{
		for (int j = -k; j <= k; j++)
		{
			int prev = j + k;
			if (j == 0)
			{
				dp[i][v[i + 1] + k] += dp[i - 1][prev];
				dp[i][v[i + 1] + k] %= mod;
			}
			else
			{
				dp[i][v[i + 1] + j + k] += dp[i - 1][prev];
				dp[i][v[i + 1] + j + k] %= mod;
				dp[i][v[i + 1] - j + k] += dp[i - 1][prev];
				dp[i][v[i + 1] - j + k] %= mod;
			}
		}
	}
	ll ans = 0;
	for (int i = -k; i <= k; i++)
	{
		ans += dp[n - 1][i+k];
		ans %= mod;
	}
	cout << ans << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}


