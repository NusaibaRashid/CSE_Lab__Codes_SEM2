// IMPLICIT TYPE CONVERSIONS
#include<stdio.h>
int main() {
    int var1 =19;
    char var2='a';
    var1 = var1 + var2;
    float var3 = var1 + 1.0;
    printf("var1=%d, var3=%f \n", var1,var3);



//EXPLICIT TYPE COVERSION
float var4 =1.7;
int add =(int)var4 + 3;
printf ("addition=%d \n", add);



//Use if-else to check whether a number is even or odd
int num;
printf("Enter an integer: \n");
scanf("%d",&num);
if (num % 2 == 0) {
    printf("%d is even.\n", num);
    } 
    else {
    printf("%d is odd.\n", num);
}
return 0;
}