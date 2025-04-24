// Arithmetic Operators
#include<stdio.h>
int main(){
      int a=10,b=5,c;
      
      
printf("Arithmetic Operators:\n" );

printf("a+b=%d\n",a+b);

printf("a-b=%d\n",a-b);

printf("a*b=%d\n",a*b);

printf("a/b=%d\n",a/b);

printf("a%%b=%d\n",a%b);

//Relational Operators
printf("Relational Operators:\n");

printf("a==b:%d\n",a==b);

printf("a!=b:%d\n",a!=b);

printf("a > b:%d\n",a > b);

printf("a < b:%d\n",a < b);

printf("a >= b:%d\n",a >= b);

printf("a <= b:%d\n",a <= b);

// Logical Operators

printf("Logical Operators:\n");

printf("a >0 && b>0:%d\n",(a >0 && b > 0));

printf("a >0 || b< 0:%d\n",(a >0 || b < 0));

printf(" !(a==b ):%d\n",!(a==b ));

//Bitwise Operators
printf(" Bitwise Operators:\n" );

printf("a&b=%d\n",a&b);

printf("a|b=%d\n",a|b);

printf("a^b=%d\n",a^b);

printf("~a=%d\n",~a);

printf("a<<1=%d\n",a<<1);

printf("a>>1=%d\n",a>>1);

//Assignment Operators
printf ("Assignment Operators:\n");

c=a;
c+= b;
//c+=b becomes c=c+b
printf("c+=b: %d\n",c);
c-=b;
printf("c-=b: %d\n",c);
c*=b;
printf("c*=b: %d\n",c);
c/=b;
printf("c/=b: %d\n",c);
c%=b;
printf("c%%=b: %d\n",c);

}