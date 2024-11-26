#include<stdio.h>
int main(){
 	int number = 0, count = 0, countNumber = 0, i, n;
 	printf("nhap n: ");
 	scanf("%d", &n);
 	while(countNumber < n){
 		number++;
 		count = 0;
 		for(i=1; i <= number; i++){
 			if(number % i == 0){
 				count++;
			 }
		 }
		 if(count == 2){
		 	printf("%d \n", number);
		 	countNumber++;
		 }
	 }
	 return 0;
}
