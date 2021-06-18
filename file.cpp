#include<bits/stdc++.h>

#define MOD 1e9+7


using namespace std;

int maxLevels = 0;

int modpow(int x, int n, int m) {
	if (n == 0) return 1 % m;
	long long u = modpow(x, n / 2, m);
	u = (u * u) % m;
	if (n % 2 == 1) u = (u * x) % m;
	return u;
}

void solve()
{
	int n, k;
	cin >> n >> k;

	int factor = 2;

	while (1) {
		if (n % factor == 0) {
			break;
		}

		factor++;
	}

	int ans  = n + factor;

	ans += (k - 1) * 2;

	cout << ans << endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}


}