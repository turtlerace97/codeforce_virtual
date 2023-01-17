
/*
*   Time :
*   Subject : Greedy
* 
*	x 번 이겼다고 가정해볼때 
*	i < x 인 경우와, i< x인 경우는 순위에 영향을 끼칠 수 없음 
*	왜냐하면, i<x인 경우 i가 나를 이겼다고 해도 i<=x 이므로 
*	i>x인 경우 i가 나한테 졌다고 해도  i>=x 이기 때문이다. 
* 
*	따라서, 고려해야 될 경우는 i=x 인 경우의 수 뿐인데, 
*	배열을 내림차순으로 정렬해서 내가 이길 수 있는 만큼 획득한 후 
*	마지막으로 획득한 것 + 현재남아있는 m 을 더했을 때 기존의 등수가 가지고 있는 능력치보다 클 경우 내 등수를 하나더 증가시킬 수 있다. 반대는 그대로 
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


