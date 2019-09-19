#include<stdio.h>
#include<conio.h>

int main(){
	int d,m;
	printf(" enter day d");
	scanf("%i", &d);
	printf(" enter month m");
	scanf("%i", &m);
	int d1=d%10;
	int d2=d/10;
	if(d<0){
		printf(" error");
	}
		if((9<d)&&(d<21)){
			if(d==10){
				printf(" tenth");
			}
			if(d==11){
				printf(" eleventh");
			}
			if(d==12){
				printf(" twelfth");
			}
			if(d==13){
				printf(" thirteenth");
			}
			if(d==14){
				printf(" fourteenth");
			}
			if(d==15){
				printf(" fifteenth");
			}
			if(d==16){
				printf(" sixteenth");
			}
			if(d==17){
				printf(" seventeenth");
			}
			if(d==18){
				printf(" eighteenth");
			}
			if(d==19){
				printf(" nineteenth");
			}
			if(d==20){
				printf(" twentieth");
		}
		}else
			{
				if(d>31){
					printf("error");
				}else
				{
					switch(d2)
				{
					case 2: printf(" twenty");break;
					case 3: printf(" thirty");break;
			    }
				switch(d1)
				{
					case 1: printf(" first");break;
					case 2: printf(" second");break;
					case 3: printf(" third");break;
					case 4: printf(" fourth");break;
					case 5: printf(" fifth");break;
					case 6: printf(" sixth");break;
					case 7: printf(" seventh");break;
					case 8: printf(" eighth");break;
					case 9: printf(" nineth");break;
					
				}
				}
			}
			if(m<1 || m>12){
				printf("error");
			}else
			{
			if(m==1){
				printf(" january");
			}
			if(m==2){
				printf(" february");
			}
			if(m==3){
				printf(" march");
			}
			if(m==4){
				printf(" april");
			}
			if(m==5){
				printf(" may");
			}
			if(m==6){
				printf(" june");
			}
			if(m==7){
				printf(" july");
			}
			if(m==8){
				printf(" august");
			}
			if(m==9){
				printf(" september");
			}
			if(m==10){
				printf(" october");
			}
			if(m==11){
				printf(" november");
			}
			if(m==12){
				printf(" december");
			}
		    }
			
			
	return 0;
}
