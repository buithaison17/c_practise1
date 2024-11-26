#include<stdio.h>
int main(){
	int pass = 123456, enterPass;
	printf("vui long nhap mat khau: ");
	scanf("%d", &enterPass);
	if(enterPass == pass){
		printf("ban da nhap dung mat khau");
	}
	else{
		printf("ban da nhap sai mat khau");
	}
	return 0;
}
