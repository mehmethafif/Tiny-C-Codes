/*##########################################################################*/
/* 																			*/
/*							Description 									*/
/*													    					*/
/* 	  			this file contains the implementations						*/
/*	which are used for calculating cosine similarity of two vector.			*/
/*																			*/
/*##########################################################################*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>  /* math.h and time.h libraries are used */
#include <time.h>

int main()
{
    int vector1[20];   /* variables for vectors norms and calculations */
    int vector2[20];
    int vector_sum[20];
    int i;
    int n1 = 0;
    int n2 = 0;
    int dot_product = 0;
    float v1_len = 0;
    float v2_len = 0;
    float cosine_smilarity;

    srand(time(NULL));

	for(i=0; i<20; i++){    /* puts random values in vactor1 array */
		int r;
		r= rand()%10;
		vector1[i] = r;
	}

	for(i=0; i<20; i++){    /* puts random values in vactor2 array */
		int r;
		r= rand()%10;
		vector2[i] = r;
	}

    printf("Vektorler:\n"); /* prints both vectors */
	printf("v1: ");
	for(i=0; i<20; i++){
		printf("%d, ",vector1[i]);
	}
	printf("\nv2: ");
    for(i=0; i<20; i++){
		printf("%d, ",vector2[i]);
	}


	for(i=0; i<20; i++){    /* counts the L0 norms of the vectors */

        if(vector1[i] != 0)
            n1+=1;
        if(vector2[i] != 0)
            n2+=1;
    }

    printf("\n\nv1 L0 norm: %d", n1); /* prints L0 norms of the vectors */
    printf("\nv2 L0 norm: %d", n2);

    for(i=0; i<20; i++){   /* calculates v1 + v2 */
        vector_sum[i] = vector1[i] + vector2[i];
    }


    printf("\n\nv1 + v2: ");    /* prints v1 + v2 */
    for(i=0; i<20; i++){
        printf("%d,", vector_sum[i]);
    }

    for(i=0; i<20; i++){     /* calculations for cosine smilarity */
        dot_product += vector1[i] * vector2[i];
        v1_len += pow(vector1[i],2);
        v2_len += pow(vector2[i],2);
    }

    v1_len = sqrt(v1_len);
    v2_len = sqrt(v2_len);
    cosine_smilarity = dot_product / (v1_len * v2_len);

    printf("\n\nsim(v1,v2): %f\n", cosine_smilarity); /* prints cosine smilarity */




    return 0;
}
