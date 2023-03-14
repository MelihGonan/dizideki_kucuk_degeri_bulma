#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayilar[10]={23,38,83,75,93,61,17,49,55,13};   //Dizi tanimi ve degerleri verildi.
	int i;                                             //Dongu degiskeni tanimlandi.
	int EnKucukSayi=sayilar[0];                        //En kucuk sayiyi tutacak degisken tanimlandi ve baslangic degeri verildi.
	
	for(i=1;i<10;i++){               
		
	if(EnKucukSayi>sayilar[i])     //Bir sonraki dizi elemani EnKucukSayi'dan kucukse degeri ona atanir.
	   EnKucukSayi=sayilar[i];	   
	}
	
	printf("en kucuk sayi : %d",EnKucukSayi);   //EnKucukSayi ekrana yazilir.
	
	return 0;
}
