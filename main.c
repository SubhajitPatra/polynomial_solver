/*
polynomial_solver
the program will assume that the polynomial is in the format of ax^2+bx+c=0 and
 the inputs shall be a , b, c respectively.The output shall be:
 1. the roots are imaginary.( no roots are printed)
 2. the roots are real and equal.( one root is printed)
 3. the roots are real and different.( two roots are printed)

 the main  program algorithm:
 1. declare the variables.
 2. take the values of a, b and c.
 3. find out the determinant by calculating b^2-4ac
 4. check the value of the determinant:
    a. if it is equal to zero then call the function RootsRealEqual with the value of determinant.
    b. if it is greater than zero then call the function RootsRealDifferent with the value of determinant.
    c. if it is smaller than zero then call the function RootsImaginary with the value of determinant.
 5. end.

 author name - Subhajit Patra
class-IX-C
roll no.-47
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,D;
    printf("Polynomial_Solver\n");
    printf("the program will assume that the polynomial is in the format of ax^2+bx+c=0\n");
    printf("enter the value of a,b and c respectively \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("input values\n a = %d, b = %d, c = %d\n ",a,b,c);
    D= calculate_determinant(a,b,c);
    printf("value of determinant = %d\n",D);
    printf("value of  square root of determinant = %d\n",sqrt(D));
    if(D==0){
        roots_real_equal(D,a,b);
    }
    else if(D>0){
        roots_real_different(D,a,b);
    }
    else{
        roots_imaginary(D,a,b);
    }
    return 0;
}
int calculate_determinant(int a,int b,int c){
    return ((b*b) - (4*a*c));
}
 void roots_imaginary(int D,int a ,int b){
    printf("roots are imaginary\n");
 }
 void roots_real_equal(int D,int a ,int b){
    float x;
    printf("roots are real , equal\n");
    x=(-b)/(2*a);
    printf("the root is %.2f",x);
 }
 void roots_real_different(int D,int a ,int b){
    float x1,x2,rootD;
    rootD = sqrt(D);
    printf("roots are real , different\n");
    x1=((-b)+ rootD)/(2*a);
    x2=((-b)- rootD)/(2*a);
    printf("the root is %.2f,%.2f",x1,x2);
 }
