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

#include <stdio.h>

int search(int a[], int n, int key) {
	int i = 0;
	while(1){
		if(i == n)
			return -1;
		if(a[i] == key)
			return 1;
		i++;
	}
}

int main(void) {
	
	int T, pn[10001], p[2000], k = 0, n, a[2]; //왜 10000까지 해야되지?? 5000까지 가능
	
	scanf("%d", &T);
	
	for(int i = 2; i <= 10000; i++) {
		pn[i] = 1;
	}
	
	for(int i = 2; i <= 10000; i++) {
		if(pn[i] == 0) continue;
		for(int j = i + i; j <= 10000; j += i) {
			pn[j] = 0;
		}
	}
	
	for(int i = 2; i <= 10000; i++) {
		if(pn[i] == 1) {
			p[k] = i;
			k++;
		}
	}
	
	
	for(int i = 0; i < T; i++) {
		scanf("%d", &n);
		int l = 0;
		
		while(p[l] <= n / 2) {
			if(search(p, 2000, n - p[l]) == 1) {
				a[0] = p[l];
				a[1] = n - p[l];
			}
			l++;
		}
		
		printf("%d %d\n", a[0], a[1]);
	}

	return 0;
}
