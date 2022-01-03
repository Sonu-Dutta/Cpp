// C++ program to rearrange the elements in array such that even positioned are greater than odd positioned elements
#include <bits/stdc++.h>
using namespace std;

void assign(int a[], int n)
{
	sort(a, a + n);

	int ans[n];
	int p = 0, q = n - 1;
	for (int i = 0; i < n; i++) {
		if ((i + 1) % 2 == 0)
			ans[i] = a[q--];
		else
			ans[i] = a[p++];
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";
}

int main()
{
	int A[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(A) / sizeof(A[0]);
	assign(A, n);
	return 0;
}