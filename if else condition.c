
#include <stdio.h>

int main()
{
//   Q)write a c program input number and check number is greater than 10 or not ?

	/*	int num;

		printf("Enter a Number: ");
		scanf("%d",&num);
		if(num > 10) {
			printf("the number %d is greater then 10",num);
		} else {
			printf("the number %d is not greater then 10",num);
		}
		*/


	// 	Q)write a c program input number and check number is even or odd ?

	/* int number;

	 printf("Enter a Number: ");
	 scanf("%d",&number);

	 if(number%2==0){
	     printf("%d is even Number",number);
	 }else{
	     printf("%d is old Number",number);
	 } */

	// Q)write a c program input number and check number is divisible by 5 or not ?

	/*	int num;
		printf("Enter a Number: ");
		scanf("%d",&num);

		if(num%5==0) {
			printf("%d is divisible by 5",num);
		} else {
			printf("%d is not divisible by 5",num);
		} */

	// Q)write a c program input character :a
	//                 apple

	// otherwise :input is not matched

	/*  char x;
	  printf("Enter your code: ");
	  scanf("%c",&x);

	  if(x == 'a'){
	      printf("apple");
	  }else{
	      printf("input is not matched");
	  } */

//     Q)write a c program input character and check character is vowel and consonant ?
// vowel :a,e,i,o,u
// consoant :

	/* char x;
	 printf("Enter character: ");
	 scanf("%c",&x);

	 if(x == 'a'){
	     printf("a is vowel");
	 }
	 if(x == 'e'){
	     printf("e is vowel");
	 }
	 if(x == 'i'){
	     printf("i is vowel");
	 }
	 if(x == 'o'){
	     printf("o is vowel");
	 }
	 if(x == 'u'){
	     printf("u is vowel");
	 }else{
	     printf("%c is consoant",x);
	 }*/

	// Q)write a c program input character 'a':
	// two number
	// addition
	// otherwise :input is not matched

	/* char x;
	 printf("Enter character: ");
	 scanf("%c",&x);
	 if(x == 'a'){
	     int a;
	     printf("Enter a num1: ");
	     scanf("%d",&a);
	     int b;
	     printf("Enter a num2: ");
	     scanf("%d",&b);
	     int c = a+b;
	     printf("total %d",c);
	 }else{
	     printf("input is not matched");
	 }*/

	// Q)write a c program input character 'w'  two number swap number with third variable otherwise :input is not matched

	/*    char x;
	    printf("Enter character: ");
	    scanf("%c",&x);
	    if(x == 'w'){
	    int a;
	    printf("enter a value: ");
	    scanf("%d",&a);
	    int b;
	    printf("enter b value: ");
	    scanf("%d",&b);
	    int c;

	    c = a;
	    a = b;
	    b = c;
	    printf("swap the value a = %d, b = %d",a,b);
	    }else{
	        printf("input is not matched");
	    }*/

	// Q)write a c program input character 's':two number swap number without third variable otherwise :input is not matched

	char x;
	printf("Enter character: ");
	scanf("%c",&x);
	if(x == 's') {
		int a;
		printf("enter a value: ");
		scanf("%d",&a);
		int b;
		printf("enter b value: ");
		scanf("%d",&b);

		a = a + b;
		b = a - b;
		a = a - b;

		printf("swap the value a = %d, b = %d",a,b);
	} else {
		printf("input is not matched");
	}


}