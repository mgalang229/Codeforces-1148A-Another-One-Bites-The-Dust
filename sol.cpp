#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll a, b, c;
	cin >> a >> b >> c, c*=2;
	a+=(c/2);
	b+=(c/2);
	int n1=a, n2=b, cnt=0;
	if(n1<n2)
		swap(n1, n2);
	while(n1-n2>1) {
		n1--;
		cnt++;
	}
	cout << (abs(a-b)>1?(a+b)-cnt:a+b) << "\n";
}
