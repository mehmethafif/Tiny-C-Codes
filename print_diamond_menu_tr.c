#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim; /* yapilan secimin atandigi degisken */

    while(secim != 0){  /* secimin 0 olmadigi kosullarda tektarlanacak menu while dongusu */
        printf("\n--- MENU ---\n");    /* menuyu print eder */
        printf("1. Yildizlardan elmas ciz\n");
        printf("2. Ogrenci bilgisini goster\n");
        printf("0. Cikis\n");
        printf("Seceneginiz: ");
        scanf("%d", &secim);  /* secim degerini alir */

        if (secim == 1){   /* secim eger 1 se icindekiler yapilir */

                    /* bu if icerisinde elmas sekli bastirilir */
            int row; /* basamak degiskeni ve forlarda kullanmak icin satir degiskenleri */
            int i,j;
            printf("\n Basamak giriniz: ");
            scanf("%d",&row); /* basamak sayisi alinir */
            row = row/2+1;  /* elmas seklini yaratabilmek icin biri duz biri ters iki piramit basmayi dusundum ilk piramit icin girilen degeri ikiye bolup 1 ekledim ki basamagin yarisi bi piramit olsun */

            for(i = 1; i<=row;i++){    /* ilk for satir sayisini cevirir  icindeki forlardan biri bosluklari digeri yildizlari basar*/

                for(j=1; j<=row-i; j++){ /* bosluklari basar */

                    printf(" ");
                }

                for(j=1; j<=2*i-1; j++){ /* yildizlari basar */

                    printf("*");

                }
            printf("\n");

            }
      /* burada ters olan piramid basilir */
            row = row -1; /* kalan basamak sayisi */
            for(i = row; i>=1;i--){ /* satir donusu */

                for(j=0; j<=row-i; j++){   /* bosluklari basar */

                    printf(" ");
                }

                for(j=1; j<=2*i-1; j++){  /* yildizlari basar */

                    printf("*");

                }
            printf("\n");
            }
                /* elmas basma islemi bitmistir while biter basa sarar */
        }

        else if (secim == 2){   /* secim iki ise altindakiler yapilir */
            /* ogrenci bilgileri satir satir basilir */
            printf("\nAd: Mehmet\n");
            printf("Soyad: Hafif\n");
            printf("Ogrenci No: 171044042\n");

        }

        else if (secim < 0 || secim > 2) /* seceneklerden farkli secim yapilirsa bu hatayi basar */
            printf("Yanlis secim yaptiniz!\n");


    }





    return 0;
}
