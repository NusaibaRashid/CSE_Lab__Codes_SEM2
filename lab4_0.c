#include <stdio.h>
#include <math.h>
int main(){
    int n;

// Q13 display numbers from 1 to n
    printf("enter value of n ");
    scanf("%d",&n);
    printf(" numbers from 1 to n:\n ");
    for(int i=1;i<=n;i++){
        printf("%d \n",i);
    }

// Q14 display the integers n n-1 n-2...3 2 1
printf("reverse order from n to 1\n");
    for(int i=n;i>=1;i--){
        printf("%d \n",i);
    }

// Q15 display all even numbers from 1 to 100 (using loop and if)
printf("even numbers from 1 to 100 are\n");   
for (int i =1;i<=100;i++){
    if(i%2==0){
    printf(" %d\n",i);}
}

//Q16 find sum of series 1 2 3 4 ... n
int sum=0;
for(int i=1;i<=n;i++){
sum=sum+i;}
printf ("sum of n = %d\n", sum);

//Q17 find product of series :1 2 3 4 5 ... n
int product=1;
 for(int i=1;i<=n;i++){
product=product*i;
 }
 printf ("product of n =%d\n", product);


 //Q18 find the factorial of a number entered by the user same as Q17

 //Q19 find the factors of a natural number
 for (int i=1;i<=n;i++){
    if(n%i==0)
    printf("factor of n are :%d\n",i);
 }

 //Q20 check whether a number is prime or not
int i,isprime=1;
 if (n<=1){
 isprime=0;
}else{
for(i=2;sqrt(n);i++){
  if(n%i==0)
  isprime=0;
  break;
}
 }
 if(isprime)
 printf("%d is a prime number",n);
 else
 printf("%d is a prime number",n);
 
}
