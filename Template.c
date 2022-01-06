#include <stdio.h>

int main(void) {
	
	int r;
	double p = 3.1415926535;
	
	scanf("%d", &r);
	
	printf("%.6lf\n", p*r*r);
	printf("%.6lf", 2*r*r); //왜 위에값ㄹ이 나오지?
	
	
	return 0;
}


N, M = map(int, input().split())

graph = []
for i in range(N):
	graph.append(list(map(int, input())))

def dfs(x, y):
	if x <= -1 or x >= n or y <= -1 or y >= m:
		return False
	if graph[x][y] == 0:
		graph[x][y] = 1
		dfs(x - 1, y)
		dfs(x, y - 1)
		dfs(x + 1, y)
		dfs(x, y + 1)
		return True
	return False


result = 0
for i in range(n):
	for j in range(m):
		if dfs(i, j) == True:
			result += 1
print(result)
