#include<stdio.h>

 int main()
{
	int a;
	printf("\nTYPE 1 NUMBER FOR JANUARY MONTH");
	printf("\nTYPE 2 NUMBER FOR FEBRUARY MONTH");
	printf("\nTYPE 3 NUMBER FOR MARCH MONTH");
	printf("\nTYPE 4 NUMBER FOR APRIL MONTH");
	printf("\nTYPE 5 NUMBER FOR MAY MONTH");
	printf("\nTYPE 6 NUMBER FOR JUNE MONTH");
	printf("\nTYPE 7 NUMBER FOR JULY MONTH");
	printf("\nTYPE 8 NUMBER FOR AUGUST MONTH");
	printf("\nTYPE 9 NUMBER FOR SEPTEMBER MONTH");
	printf("\nTYPE 10 NUMBER FOR OCTOBER MONTH");
	printf("\nTYPE 11 NUMBER FOR NOVEMBER MONTH");
	printf("\nTYPE 12 NUMBER FOR DECEMBER MONTH");
	printf("\nENTER THE NUMBER OF THE MONTH =");
	scanf("%d",&a);
	
	switch(a) 
	{
		
		case 1 :
		      printf("JANUARY");
		      break;
	    case 2 :
		      printf("FEBRUARY");
		      break;
		case 3 :
		      printf("MARCH");
		      break;
		case 4 :
		      printf("APRIL");
		      break;
		case 5 :
		      printf("MAY");
		      break;
		case 6 :
		      printf("JUNE");
		      break;
	    case 7 :
		      printf("JULY");
		      break;
		case 8 :
		      printf("AUGUST");
		      break;
		case 9 :
		      printf("SAPTEMBER");
		      break;
		case 10 :
		      printf("OCTOBER");
		      break;
		case 11 :
		      printf("NOVEMBER");
		      break;
		case 12 :
		      printf("DECEMBER");
		      break;
	        	
		default:
	       	printf("PLEASE ENTER THE VALID MONTH NUMBER");
		      
	}
	
	return 0; 
	
	
}
