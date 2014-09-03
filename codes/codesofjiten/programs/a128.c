#include<stdio.h>
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);
int x = 1; //global
int main() {
	int x = 5; //local
	printf("local x in outer scope of main is %d\n",x);
	{ //start new scope
		int x = 7; //new local variable..
		printf("local x in outer scope of main is %d\n",x);
	} //end new scope..
	printf("local x in outer scope of main is %d\n",x);
}
uselocal(void);
useStaticLocal();
useGlobal();
useLocal();
useStaticLocal();
useGlobal();
printf("local x in main is %d\n",x);
void useLocal(void) {
	int x = 25;
	printf("local x is %d after entering useLocal()\n", x);
	x++;
	printf("local x is %d before exiting useLocal()\n", x);
}
void useStaticLocal(void) {
	static int x = 50;
	printf("static x is %d after entering useStaticLocal()\n", x);
	x++;
	printf("static x is %d before exiting useStaticLocal()\n", x);
}
void useGlobal(void) {
	printf("global x is %d after entering useGlobal()\n", x);
	x = x * 10;
	printf("global x is %d before exiting useGlobal()\n", x);
}

