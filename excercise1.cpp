#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int d,m,d1=d%10,d2=d/10;
	cout<<"enter day d "; cin>>d;
	cout<<"enter month m "; cin>>m;
	if(d<1){
		cout<<"error(0<d<32)";
	}if(d>=1){
		if((9<d)&&(d<21)){
		switch(d){
			case 10: cout<<"tenth";break;
			case 11: cout<<"eleventh";break;
			case 12: cout<<"twelfth";break;
			case 13: cout<<"thirteenth";break;
			case 14: cout<<"forteenth";break;
			case 15: cout<<"fifteenth";break;
			case 16: cout<<"sixteenth";break;
			case 17: cout<<"seventeenth";break;
			case 18: cout<<"eightteenth";break;
			case 19: cout<<"nineteenth";break;
			case 20: cout<<"twentieth";break;
	    }
		}
		}if(((d<=9)&&(d>=1))||(d>=21)){
	        if(d>31){
				cout<<"error(0<d<32))";
			}if(d<=31){
				switch(d)
				{
					case 1: cout<<"first";break;
					case 2: cout<<"second";break;
					case 3: cout<<"third";break;
					case 4: cout<<"fourth";break;
					case 5: cout<<"fifth";break;
					case 6: cout<<"sixth";break;
					case 7: cout<<"seventh";break;
					case 8: cout<<"eighth";break;
					case 9: cout<<"nineth";break;
				}
				switch(d2)
				{
					case 2: cout<<"twenty";break;
					case 3: cout<<"thirty";break;
			    }
				switch(d1)
				{
					case 1: cout<<"-first";break;
					case 2: cout<<"-second";break;
					case 3: cout<<"-third";break;
					case 4: cout<<"-fourth";break;
					case 5: cout<<"-fifth";break;
					case 6: cout<<"-sixth";break;
					case 7: cout<<"-seventh";break;
					case 8: cout<<"-eighth";break;
					case 9: cout<<"-nineth";break;
				}
			}
	    }
	    if(m<1 || m>12){
		cout<<"error(0<m<13)";
	}if((1<=m)&&(m<=12)){
		switch(m){
			case 1: cout<<" january";break;
			case 2: cout<<" february";break;
			case 3: cout<<" march";break;
			case 4: cout<<" april";break;
			case 5: cout<<" may";break;
			case 6: cout<<" june";break;
			case 7: cout<<" july";break;
			case 8: cout<<" august";break;
			case 9: cout<<" september";break;
			case 10: cout<<" october";break;
			case 11: cout<<" november";break;
			case 12: cout<<" december";break;
		}
    }
}
