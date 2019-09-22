#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,a,b;
	cout<<"enter n(9<n<41) "; cin>>n;
	if((n<10)||(n>40)){ cout<<"error(9<n<41)";
	}else{ cout<<"number of educational tasks: ";
	    if(n<20){ switch(n){
				case 10: cout<<"ten";break;
				case 11: cout<<"elven";break;
				case 12: cout<<"twelve";break;
				case 13: cout<<"thirteen";break;
				case 14: cout<<"fourteen";break;
				case 15: cout<<"fifteen";break;
				case 16: cout<<"sixteen";break;
				case 17: cout<<"seventeen";break;
				case 18: cout<<"eighteen";break;
				case 19: cout<<"nineteen";break;
			}
			
		}
		a=n%10;
		b=n/10;
		if(n>19){
		switch(b){
		case 2: cout<<" twenty";break;
		case 3: cout<<" thirty";break;
		case 4: cout<<" forty";break;
	}
	    switch(a){
		case 1: cout<<" one";break;
		case 2: cout<<" two";break;
		case 3: cout<<" three";break;
		case 4: cout<<" four";break;
		case 5: cout<<" five";break;
		case 6: cout<<" six";break;
		case 7: cout<<" seven";break;
		case 8: cout<<" eight";break;
		case 9: cout<<" nine";break;
	}
    }  
	}
}
