#include<stdio.h>
int main(){
	int num1, num2, num3, num4, num5, countOddNumber;
	printf("nhap so thu nhat: ");
	scanf("%d", &num1);
	printf("nhap so thu hai: ");
	scanf("%d", &num2);
	printf("nhap so thu ba: ");
	scanf("%d", &num3);
	printf("nhap so thu tu: ");
	scanf("%d", &num4);
	printf("nhap so thu nam: ");
	scanf("%d", &num5);
	if(num1 % 2 != 0){
		countOddNumber++;
	}
	if(num2 % 2 != 0){
		countOddNumber++;
	}
	if(num3 % 2 != 0){
		countOddNumber++;
	}
	if(num4 % 2 != 0){
		countOddNumber++;
	}
	if(num5 % 2 != 0){
		countOddNumber++;
	}
	printf("co %d so le", countOddNumber);
	printf("co %d so chan", 5 - countOddNumber);
	return 0;
}
