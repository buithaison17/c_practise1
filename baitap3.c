#include<stdio.h>
int main(){
	char pass[10] = "sonbui123", enterPass[10];
	printf("hay nhap mat khau: ");
	scanf("%s", enterPass);
	printf("%s\n", pass);
	printf("%s\n", enterPass);
	if(enterPass == pass){
		printf("mat khau chinh xac");
	}
	return 0;
}
