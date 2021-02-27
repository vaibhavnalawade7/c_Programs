#include<stdio.h>
#include<conio.h>

int main()
{
	//Declaration Of Veriables float num1, num2, sum
	float num1, num2, sum;
	
	printf("Simple Addition Program\n\n");
	
	//Accepting Inputs
	printf("Enter 1st Number\n");
	scanf("%f",&num1);
	printf("Enter Second Number\n");
	scanf("%f",&num2);
	
	//Addition Logic
	sum = num1 + num2;
	
	//Printing Results
	printf("Addition Of %f & %f Is: %f",num1, num2, sum);
	
	
	/*
		//Pro Logic
		
		num1 += num2;
		
		//Printing Results
		printf("Addition Is: %f",num1);
	*/
	
	return 0;
}
