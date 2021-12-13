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

#include <stdio.h> //선형검색, 이분탐색(정렬 시) 공부해야됨.

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

#include <stdio.h>

int main(void) {
	
	int T, d, x, y, j, t, a[100000];
	
	scanf("%d", &T);
	
	int i = 0;
	while(1) {
		if(i*(i+1) < 2147483647)
			a[i] = i*(i+1);
		else break;
		i++;
	}
	
	
	for(int i = 0; i < T; i++) {
		scanf("%d %d", &x, &y);
		d = y - x;
		
		j = 0;
		while(1) {
			if(a[j] < d && d <= a[j+1]) {
				if(a[j] + (j+1) >= d) {
					t = j*2 + 1;
					break;
				}
				else {
					t = j*2 + 2;
					break;
				}
			}
			j++;
		}
		
		printf("%d\n", t);
	}
	

	return 0;
}

