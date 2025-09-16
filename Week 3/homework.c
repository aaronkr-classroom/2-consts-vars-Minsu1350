#include <stdio.h>
#include "calc.h"
#include <math.h>

int main(void) {
	int P = 1000000;
	int r = 10;
	int n = 12;
	int t = 40;
	
	int A = pow(P*(1 + Div(r,n)),Mul(n,t));

	printf("미래 가치는 %d 입니다", A);
}