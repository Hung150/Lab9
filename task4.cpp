#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"enter n: "; cin>>n;
	int a=n/100,b=n%100,c=b/10,d=n%10;
	if(n<100||n>999){ cout<<"error(please enter 99<n<1000)";
	}else{
		if(b<21){
		switch(a)
	{
		case 1: cout<<"one ";break;
		case 2: cout<<"two ";break;
		case 3: cout<<"three ";break;
		case 4: cout<<"four ";break;
		case 5: cout<<"five ";break;
		case 6: cout<<"six ";break;
		case 7: cout<<"seven ";break;
		case 8: cout<<"eight ";break;
		case 9: cout<<"nine ";break;
	}
    cout<<"hundred"<<" ";
	cout<<"and"<<" ";
	    switch(b)
	{
		case 1: cout<<"one";break;
		case 2: cout<<"two";break;
		case 3: cout<<"three";break;
		case 4: cout<<"four";break;
		case 5: cout<<"five";break;
		case 6: cout<<"six";break;
		case 7: cout<<"seven";break;
		case 8: cout<<"eight";break;
		case 9: cout<<"nine";break;
		case 10: cout<<"ten";break;
		case 11: cout<<"eleven";break;
		case 12: cout<<"twelve";break;
		case 13: cout<<"thirteen";break;
		case 14: cout<<"fourteen";break;
		case 15: cout<<"fifteen";break;
		case 16: cout<<"sixteen";break;
		case 17: cout<<"seventeen";break;
		case 18: cout<<"eighteen";break;
		case 19: cout<<"nineteen";break;
	}
	}else{
		switch(a)
	{
		case 1: cout<<"one ";break;
		case 2: cout<<"two ";break;
		case 3: cout<<"three ";break;
		case 4: cout<<"four ";break;
		case 5: cout<<"five ";break;
		case 6: cout<<"six ";break;
		case 7: cout<"seven ";break;
		case 8: cout<<"eight ";break;
		case 9: cout<<"nine ";break;
	}
	cout<<"hundred"<<" ";
	cout<<"and"<<" ";
		switch(c)
	{
		case 1: cout<<"twenty"<<" ";break;
		case 2: cout<<"thirty"<<" ";break;
		case 3: cout<<"forty"<<" ";break;
		case 4: cout<<"fifty"<<" ";break;
		case 5: cout<<"sixty"<<" ";break;
		case 6: cout<<"seventy"<<" ";break;
		case 7: cout<<"eighty"<<" ";break;
		case 8: cout<<"ninety"<<" ";break;
	}
		switch(d)
	{
		case 1: cout<<"one";break;
		case 2: cout<<"two";break;
		case 3: cout<<"three";break;
		case 4: cout<<"four";break;
		case 5: cout<<"five";break;
		case 6: cout<<"six";break;
		case 7: cout<<"seven";break;
		case 8: cout<<"eight";break;
		case 9: cout<<"nine";break;
	}
	}
    }
}
