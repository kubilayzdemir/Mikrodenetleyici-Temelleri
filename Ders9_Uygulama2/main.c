#include <stdio.h>
#include <REGX52.H>

#define display P2  // display port-2'ye baglanir
#define yukari  P1_0 // yukari butonunun bagli oldugu giris
#define asagi	  P1_1 // asagi butonunun bagli oldugu giris

void delay(void){
	unsigned int i;
	for(i=0;i<32000;i++);
}

void main(){
int sayi = 0;		
unsigned char tablo[10] = {	0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
		P1 = 0x00;  // P1 giris olarak ayarlanir													
		display = 0xFF; // P2 çikis olarak ayarlanir
		while (1){
					display = tablo[sayi];
					if (yukari){
						delay();
						while(yukari);
						if(sayi<9){
						sayi++;	
						}
						else {
							sayi = 0;
						}
					}
					if (asagi){
						delay();
						while(asagi);
						if(sayi>0){
						sayi--;	
						}
						else {
							sayi = 9;
						}
					}

		}			
														
																
														
}
