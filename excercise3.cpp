#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("enter n");
	scanf("%i", &n);
	printf("number of educational tasks:");
	int a=n%10;
	int b=n/10;
	if(n<10){
		printf("error");
	}
		if(n<20){
			if(n==10){
		printf(" ten");
	}
	    if(n==11){
		printf(" eleven");
	}
		if(n==12){
		printf(" twelve");
	}
		if(n==13){
		printf(" thirteen");
	}
		if(n==14){
		printf(" fourteen");
	}
		if(n==15){
		printf(" fifteen");
	}
		if(n==16){
		printf(" sixteen");
	}
		if(n==17){
		printf(" seventeen");
	}
		if(n==18){
		printf(" eighteen");
	}
		if(n==19){
		printf(" nineteen");
	}
			}else
		{
			if(n>40){
				printf("error");
			}else
			{
					switch(b)
	{
		case 2: printf(" twenty");break;
		case 3: printf(" thirty");break;
		case 4: printf(" forty");break;
	}
	    switch(a)
	{
		case 1: printf(" one");break;
		case 2: printf(" two");break;
		case 3: printf(" three");break;
		case 4: printf(" four");break;
		case 5: printf(" five");break;
		case 6: printf(" six");break;
		case 7: printf(" seven");break;
		case 8: printf(" eight");break;
		case 9: printf(" nine");break;
	}
	}
			}
    return 0;
}
