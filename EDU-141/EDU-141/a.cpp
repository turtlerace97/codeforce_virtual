
/*
*   Time :
*   Subject : Constructive
* 
*	오름차순으로 배열이 주어지는데 
*	reoreder 해서 현재 보고 있는 원소가 앞의 누적합이 아니게 만들라는 것
*	
*	첫번째 원소가 마지막 원소랑 같다면 모든 원소가 같다는 의미이므로 답이 될 수 없음 
*	
*	내림차순으로 바꾸었을 때 v[1]이 v[0]와 같다면 마지막 원소랑 바꾸고 답을 출력 시키면 됨
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

void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int& x : v) cin >> x;
	if (v[0] == v.back())
	{
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	if (v[0] == v[1]) swap(v[1], v.back());
	for (auto u : v) cout << u << " "; cout << "\n";
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


