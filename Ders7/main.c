#include <REGX51.H>
#include <stdio.h>

#define button 	P1_0
#define led 		P3_0

void main (){
	button 	= 1;
	led			= 0; 	
	while(1){
		if(button){
			led=1;
		}
		else{
			led=0;
		}
	}
}