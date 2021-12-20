#include <stdio.h>

int main(void) {
	
	int r;
	double p = 3.1415926535;
	
	scanf("%d", &r);
	
	printf("%.6lf\n", p*r*r);
	printf("%.6lf", 2*r*r); //왜 위에값ㄹ이 나오지?
	
	
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


n, m = map(int, input().split())
a, b, c = map(int, input().split())
map = [list(map(int, input().split())) for i in range(n)]
