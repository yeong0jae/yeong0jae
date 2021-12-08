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

	int a, b, i, j, sum = 0, m, cnt = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	for(i = a; i <= b; i++) {
		for(j = 1; j < i; j++) {
			if(i % j == 0)
				break;
		}
		if(j == i && cnt = 0) {
			sum += i;
			m = i;
			cnt = 1;
		}
		if(j == i && cnt = 1) {
			sum += i;
			if(m > i)
				m = i;
		}
	}
	
	printf("%d\n", sum);
	printf("%d", m);



	return 0;
}
