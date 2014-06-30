/****
  *	author: MForever78
  *	date:	2014.6.30
  *	
  *	本题无坑，10^100 不能直接用变量存，于是用数组模拟加法，简单处理一下进位即可。
  *	因为开始处理进位的时候写成了 >10 的时候进位，所以有一个点不通过。
****/
#include <stdio.h>

char table[10][10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main()
{
	char c;
	int sum[200] = {0};

	void add(int, int *);
	void print(int *);

	sum[0] = 0;

	while ((c = getchar()) && c != '\n') {
		if (c >= '0' && c <= '9') {
			add(c - '0', sum);
		}
	}
	
	print(sum);

	return 0;
}

void add(int a, int * sum)
{
	int i;
	i = 1;
	sum[i] += a;
	while (sum[i] >= 10) {
		sum[i] -= 10;
		i++;
		sum[i]++;
	}
	if (i > sum[0]) {
		sum[0] = i;
	}
}

void print(int * sum)
{
	int i;
	for (i = sum[0]; i > 1; i--) {
		printf("%s ", table[sum[i]]);
	}
	printf("%s\n", table[sum[1]]);
}

