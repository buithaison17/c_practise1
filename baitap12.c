#include<stdio.h>
int main(){
	int first = 0, second = 1, count = 2, n, next;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("%d\n", first);
	printf("%d\n", second);
	while(count < n){
		next = first + second;
		printf("%d\n", next);
		first = second;
		second = next;
		count++;
	}
	return 0;
}
