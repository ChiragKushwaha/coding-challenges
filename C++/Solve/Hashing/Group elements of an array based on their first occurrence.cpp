#include <iostream>
#include <unordered_map>
using namespace std;

void rearrange(int A[], int n)
{
	unordered_map<int, int> freq;
	for (int i = 0; i < n; i++) {
		freq[A[i]]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (freq.find(A[i]) != freq.end())
		{
			while (freq[A[i]]--) {
				cout << A[i] << " ";
			}
			freq.erase(A[i]);
		}
	}
}

int main()
{
	int A[] = { 5, 4, 5, 5, 3, 1, 2, 2, 4 };
	int n = sizeof(A)/sizeof(A[0]);

	rearrange(A, n);

	return 0;
}