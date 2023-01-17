
/*
*   Time :
*   Subject : Greedy
* 
*	x �� �̰�ٰ� �����غ��� 
*	i < x �� ����, i< x�� ���� ������ ������ ��ĥ �� ���� 
*	�ֳ��ϸ�, i<x�� ��� i�� ���� �̰�ٰ� �ص� i<=x �̹Ƿ� 
*	i>x�� ��� i�� ������ ���ٰ� �ص�  i>=x �̱� �����̴�. 
* 
*	����, ����ؾ� �� ���� i=x �� ����� �� ���ε�, 
*	�迭�� ������������ �����ؼ� ���� �̱� �� �ִ� ��ŭ ȹ���� �� 
*	���������� ȹ���� �� + ���糲���ִ� m �� ������ �� ������ ����� ������ �ִ� �ɷ�ġ���� Ŭ ��� �� ����� �ϳ��� ������ų �� �ִ�. �ݴ�� �״�� 
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

void solve()
{
	int n, m; cin >> n >> m;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i]; b[i] = a[i];
	}
	sort(b.begin(), b.end());
	int idx = 0;
	for (int i = 0; i < n; i++)
	{
		if (m - b[i] < 0) break;
		m -= b[i];
		idx++;
	}
	if (idx != 0 && idx != n && m + b[idx - 1] >= a[idx]) idx++;
	cout << n + 1 - idx << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


