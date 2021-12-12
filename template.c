#include <stdio.h>

int main(void) {
	
	int T, i, j, n;
	
	scanf("%d", T);
	
	for(i = 0; i < T; i++;) {
		scanf("%d %d", x, y);
		
		d = y - x;
		
		if(d == 1)
			printf("%d\n", d);
		else if(d == 2)
			printf("%d\n", d);
		else {
			for(j = 3; j <= d; j++) {
				
			}
		}
	}
	
	

	return 0;
}


#include <stdio.h>

int main(void) {
	
	int r;
	double p = 3.1415926535;
	
	scanf("%d", &r);
	
	printf("%.6lf\n", p*r*r);
	printf("%.6lf", 2*r*r); //왜 위에값ㄹ이?
	
	
	return 0;
}
