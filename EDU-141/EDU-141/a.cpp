
/*
*   Time :
*   Subject : Constructive
* 
*	������������ �迭�� �־����µ� 
*	reoreder �ؼ� ���� ���� �ִ� ���Ұ� ���� �������� �ƴϰ� ������ ��
*	
*	ù��° ���Ұ� ������ ���Ҷ� ���ٸ� ��� ���Ұ� ���ٴ� �ǹ��̹Ƿ� ���� �� �� ���� 
*	
*	������������ �ٲپ��� �� v[1]�� v[0]�� ���ٸ� ������ ���Ҷ� �ٲٰ� ���� ��� ��Ű�� ��
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


