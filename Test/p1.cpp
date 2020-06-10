#include<iostream>
#include<vector>
using namespace std;

int num(int a, int b);
int main()
{
	int T;
	cin >> T;
	vector<int>n(T), a(T), b(T);
	for (int i = 0; i < T; i++)
		cin >> n[i] >> a[i] >> b[i];
	for (int i = 0; i < T; i++)
	{
		int m = n[i]/num(a[i], b[i]);
		if (m % 2 == 0)
			cout << (i == (T - 1) ? "No" : "No\n");
		else
			cout<< (i == (T - 1) ? "Yes" : "Yes\n");
	}
}

int num(int a,int b)
{
	return a%b==0?b:num(b, a % b);
}