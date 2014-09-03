#include <cstdio>
#include<string.h>
using namespace std;

struct Tree { int maxv; char lt; char rt; };
const int MAX = 1 << 17;
char a[MAX];
Tree T[MAX << 1];

inline int max2(int a, int b) {
	return ((a > b)? a : b);
}

inline int max3(int a, int b, int c) {
	return max2(a, max2(b, c));
}

void init(int Node, int i, int j) {
	if(i==j) {
		T[Node].maxv = 0;
		T[Node].lt=T[Node].rt=a[i];
		return;
	}
	int m = (i+j)/2;
	init(2*Node, i, m);
	init(2*Node+1, m+1, j);
	T[Node].maxv =T[2*Node].maxv+T[2*Node+1].maxv;
	if(T[2*Node].rt==T[2*Node+1].lt)
		T[Node].maxv++;
	T[Node].lt=T[2*Node].lt;
	T[Node].rt=T[2*Node+1].rt;
}

void find(Tree &res, int Node, int L, int R, int i, int j) {
	if(L==i && R==j) {
		res = T[Node];
		return;
	}
	int m = (L + R)/2;
	if(j<=m) find(res, 2*Node, L, m, i, j);
	else if(i>m) find(res, 2*Node+1, m+1, R, i, j);
	else {
		Tree Left, Right;
		find(Left, 2*Node, L, m, i, m);
		find(Right, 2*Node+1, m+1, R, m+1, j);
		res.maxv=Left.maxv+Right.maxv;
		if(Left.rt==Right.lt)
			res.maxv++;
		res.lt=Left.lt;
		res.rt=Right.rt;
	}
}

int main() {
	int n, i, j, m;
	Tree res;
	scanf("%s",a);
	n=strlen(a);
	init(1, 0, n-1);
	scanf("%d", &m);
	while(m--) {
		scanf("%d%d", &i, &j);
		find(res, 1, 0, n-1, --i, --j);
		printf("%d\n", res.maxv);
	}
	return 0;
}
