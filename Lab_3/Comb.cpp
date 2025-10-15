#include "Comb.h"


int factorial(int n) {
	int res = 1;
	for (int i = 2; i <= n; i++) {
		res *= i;
	}
	return res;
}

int A(int n, int k) {
	if (k > n) {
		return 0;
	}
	return factorial(n) / factorial(n - k);
}

int _A(int n, int k) {
	return pow(n, k);
}


int C(int n, int k) {
	return factorial(n) / (factorial(k)* factorial(n-k));
}

int _C(int n, int k) {
	return factorial(n + k - 1) / (factorial(k) * (factorial(n - 1)));
}

int GenPerm(int* A, int n) {
	int i;
	for (i = n-2; i >= 0; i--) {
		if (A[i] < A[i + 1]) {
			break;
		}
	}

	if (i < 0) { return 0;}

	int j = n - 1;
	while (A[j] <= A[i]) 
	{ 
		j--;
	}
	my_swap(A[i], A[j]);
	sort_bubble(A,n,i+1,n);

	return 1;
}

