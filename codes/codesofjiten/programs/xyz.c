#include<stdio.h>
int findmax(int, int, int);
int main() {
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("max is %d\n", findmax(x,y,z));
}
int findmax(int a, int b, int c) {
	int m;
	m = a;
	if (m < b) {
		m = b;
	}
	if (m < c) {
		m = c;
	}
	return m;
}

