#include <iostream>
using namespace std;


int main() {
	int arr[1000][1000], m , n;

	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
		cout << i << ": " << sum << endl;
	}

}
