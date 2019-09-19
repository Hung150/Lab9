#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("enter n"); scanf("%i", &n);
	int a=n/100;
	int b=n%100;
	int c=b/10;
	int d=n%10;
	if((n<100)||(n>999)){
		printf("error");
	}else{
		if(b<21){
		switch(a)
	{
		case 1: printf(" one hudred");break;
		case 2: printf(" two hundred");break;
		case 3: printf(" three hundred");break;
		case 4: printf(" four hundred");break;
		case 5: printf(" five hundred");break;
		case 6: printf(" six hundred");break;
		case 7: printf(" seven hundred");break;
		case 8: printf(" eight hundred");break;
		case 9: printf(" nine hundred");break;
	}
	 switch(b)
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
		case 10: printf(" ten");break;
		case 11: printf(" eleven");break;
		case 12: printf(" twelve");break;
		case 13: printf(" thirteen");break;
		case 14: printf(" fourteen");break;
		case 15: printf(" fifteen");break;
		case 16: printf(" sixteenteen");break;
		case 17: printf(" seventeen");break;
		case 18: printf(" eighteen");break;
		case 19: printf(" nineteen");break;
	}
	}else{
		switch(a)
	{
		case 1: printf(" one hudred");break;
		case 2: printf(" two hundred");break;
		case 3: printf(" three hundred");break;
		case 4: printf(" four hundred");break;
		case 5: printf(" five hundred");break;
		case 6: printf(" six hundred");break;
		case 7: printf(" seven hundred");break;
		case 8: printf(" eight hundred");break;
		case 9: printf(" nine hundred");break;
	}
		switch(c)
	{
		case 1: printf(" twenty");break;
		case 2: printf(" thirty");break;
		case 3: printf(" forty");break;
		case 4: printf(" fifty");break;
		case 5: printf(" sixty");break;
		case 6: printf(" seventy");break;
		case 7: printf(" eighty");break;
		case 8: printf(" ninty");break;
	}
		switch(d)
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
