/*##########################################################################*/
/* 																			*/
/*				                171044042.c 			        			*/
/*					        	Mehmet Hafif								*/
/*                                                                          */
/*##########################################################################*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* fonksiyon prototipleri */
void rastgele_cikolata(int cikolatalar[]);
void cikolata_yazdirma(int cikolatalar[]);
void problem_hesaplama(int cikolatalar[]);


int main()
{
    srand(time(NULL));

    /* cikolatalarin uzunluklarinin tutuldugu array */
    int cikolatalar[6];

    /* fonksiyonlarin calismasiyla program calisir aciklamalari altta */
    rastgele_cikolata(cikolatalar);
    cikolata_yazdirma(cikolatalar);
    problem_hesaplama(cikolatalar);


    return 0;
}

/* cikolata arrayine 1-11 arasi rastgele degerler atar bunlar uzunlugu temsil eder */
void rastgele_cikolata(int cikolatalar[]){
    int i;
    for(i=0; i<6; i++){
        cikolatalar[i] = (rand()%11)+1;
    }
}
/* cikolata uzunluklarini temsil eden arrayi yazdirir */
void cikolata_yazdirma(int cikolatalar[]){
    printf("\nCikolatalar: ");
    int i;
    for(i=0; i<6; i++){
        printf("%d ",cikolatalar[i]);
    }
}
/* kosullara göre kimin kaç cikolata yedigini ve kimin kazandigini hesaplar ve yazdirir */
void problem_hesaplama(int cikolatalar[]){

    int mehmet_indis = 0;   /* kisilerin hangi indiste oldugunu yani hangi cikolatayi yedigini tutar */
    int ayse_indis = 5;
    double mehmet_hiz = 2;  /* cikolata yeme hizini tutar */
    double ayse_hiz = 1;
    double zaman;   /* zamaný yani adýmý sayar */
    int mehmet_sayi=0;  /* kaç cikolata yediklerinin sayisini tutar */
    int ayse_sayi=0;
    double temp_mehmet;    /* gecici zamaný tutar */
    double temp_ayse;
    temp_mehmet = zaman;
    temp_ayse = zaman;


    while(mehmet_indis <= ayse_indis){

        /* ortada kalan için kontroller */
        if(mehmet_indis +1 == ayse_indis){
            mehmet_sayi++;
            ayse_sayi++;
            break;
        }
        if (mehmet_indis == ayse_indis){
            mehmet_sayi++;
            break;
        }

        /* çikolata uzunlugu kisinin yeme hizina bolunerek gecmesi gereken sure hesaplanir
        zaman degiskeni her dongude artar ve gecmesi gereken sure kadar artýnca kisi bir sonraki
        indise yani cikolataya gecer bu anda yenilen cikolata sayisida arttirilir */
        double gerekli_zaman_mehmet = 0;
            gerekli_zaman_mehmet = cikolatalar[mehmet_indis]/mehmet_hiz;
        if(zaman == temp_mehmet + gerekli_zaman_mehmet ){
            mehmet_indis++;
            mehmet_sayi++;
            temp_mehmet = zaman;
        }

        double gerekli_zaman_ayse =0;
        gerekli_zaman_ayse = cikolatalar[ayse_indis]/ayse_hiz;

        if(zaman == temp_ayse + gerekli_zaman_ayse){
            ayse_indis--;
            ayse_sayi++;
            temp_ayse = zaman;
        }

        zaman+= 0.5;

    }

    /* Kimin kac cikolata yedigini ve kimin kazandigi yazdirilir */
    printf("\nMehmet %d cikolata yemistir.", mehmet_sayi);
    printf("\nAyse %d cikolata yemistir.", ayse_sayi);
    if(mehmet_sayi>ayse_sayi)
        printf("\nKazanan: Mehmet");
    else if (mehmet_sayi== ayse_sayi)
        printf("\nKazanan: Berabere");
    else
        printf("\nKazanan: Ayse");


}
