
/*
*   Time :
*   Subject : Constructive
*	
*	� n�̵� 1~n^2-1 ������ ���� ��� ���� �� �ִ�. 
*	�� ������ ���� ������ �ع��� �������� �ʰ� � ����ٺ��� ������ �� �ִ�. 
*	�� ���� ���� �� ������ ���� n 2n 3n ... n(n-1) �� ������Ű�� 
*	������ ���� �� ���̷� ä���־���. 
* 
*   ex n=4
	
	1  13  5  9  : +12 -8 +4 
	16 4   12 8  : -12 +8 -4
	2  14  6  10 : +12 -8 +4 
	15 3   11 7  : -12 +8 -4
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
	vector<vector<int>> v(n, vector<int>(n));
	v[0][0] = 1;
	int temp = n * n - 1; int k = 2;
	for (int i = 1; i < n; i++)
	{

		v[i][0] = v[i - 1][0] + pow(-1, k) * temp;
		temp--;
		k++;
	}

	for (int i = 0; i < n; i++)
	{
		temp = n * (n - 1);
		if (i % 2 == 0) k = 2;
		else k = 1;
		for (int j = 1; j < n; j++)
		{
			v[i][j] = v[i][j - 1] + pow(-1, k) * temp;
			temp -= n;
			k++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << v[i][j] << " ";
		}cout << "\n";
	}
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


