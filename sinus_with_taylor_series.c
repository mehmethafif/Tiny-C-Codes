/*##########################################################################*/
/* 																			*/
/*				 HW08_Mehmet_Hafif_171044042_part1.c 						*/
/*																			*/
/*							Description 									*/
/*																			*/
/* 	  The HW05_Name_Sirname_091041004.c contains the implementations		*/
/*         which are used for calculating sinus of a angle in degree.		*/
/*																			*/
/*##########################################################################*/


#include <stdio.h>
#define PI 3.14159	/* pi constant defined here */
int factorial(int n);	/* prototypes of my functions */
double pow(double x, int n);
double sin(double x);

int main()
{
    double x; /* user enters angle in degree, it is converted radian then used in function */
    printf("Enter angles in degrees: ");
    scanf("%lf", &x);
    x = (double)(x*PI)/180.0;
    printf("Sin value is: %lf \n\n",sin(x));

 
  return 0;
}

int factorial(int n){	/* this fuction calculates and returns the factorial of the parameter */
    int c;
    int fact =1;
    for (c = 1; c <= n; c++)
        fact = fact * c;
    return fact;
}

double pow(double x, int n){	/* this function calculates and returns the value of x to the n */
    double pow=1;
    int i;
    for (i=1;i<=n;i++)
        pow = pow * x;
    return pow;
}

double sin(double x){	/*this function calculates and returns the sinus value of the radian parameter by using taylor series and gets the number of terms to be used*/
    int n;
    int i;
    printf("Enter number of terms to be used: ");
    scanf("%d", &i);
    double result = 0;
    for(n=0; n<=i; n++){	
        double sign_val = pow(-1,n); /* even terms are positive odds are negative */
        double power_val = pow(x,2*n+1);
        int fac_val = factorial(2*n+1);
        result = result + sign_val * power_val / fac_val; /* one complete term calculated and added to old one */
    }
    return result;
}


