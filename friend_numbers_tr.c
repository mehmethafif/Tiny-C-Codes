#include <stdio.h>
#include <stdlib.h>


int carpan_topla(int num); /* Altta tanimlanan fonksiyonun prototipi*/

int main(){

	while(1){    /* programi birden fazla kez kullanabilmek icin while icinde yazdim */

        /* degiskenlerim */
		int num;
        int carpanToplami=0;
        int carpanToplami2=0;

        printf("Arkadasini bulmak istediginiz sayiyi giriniz: ");
        scanf("%d",&num);
        /* carpanlari toplayan fonksiyonun cagrilmasi */
        carpanToplami = carpan_topla(num);
        /* carpanlari toplayan fonksiyonun cagrilmasi*/
        carpanToplami2 = carpan_topla(carpanToplami);

		/* 2. carpanlar toplami ilk girilen sayiya esitse carpanlari arkadasidir */
        if(carpanToplami2 == num){
            printf("%d 'nin arkadas sayisi : %d \n\n", num, carpanToplami);
        }
        else{
            printf("%d sayisinin arkadas sayisi bulunmamaktadir. \n\n", num);
        }
    }

    return 0;
}


int carpan_topla(int num){ /* parametrenin carpanlarinin toplamini donduren fonksiyon */
    int i;
    int carpan=0;
    /* girilen sayinin carpanlarinin toplamlarini hesaplayan for dongusu */
    for(i =1 ; i <= num/2 ; i++){
        if (num%i == 0){
            carpan = carpan + i;
            }
    }
    return carpan;
}

