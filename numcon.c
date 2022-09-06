#include<stdio.h>
#include<math.h>
int main()
{
    int ch,rem,bin=0,dec=0,i=0,o=1,m;
    long long n;
    printf("\n...........................\n");
    printf("WELCOME TO NUMBER CONVERTER\n");
    printf("............................\n\n");
    printf("Make Your Choice:-\n1. Binary To Decimal Converter\n2. Decimal To Binary Converter\n");
    printf("Enter Your Choice: ");
    scanf("%d",&ch);

    if (ch==1)
    {
        printf("You Choose Binary To Decimal....\n");
        printf("Enter Binary Number: ");
        scanf("%lld",&n);
        while (n!=0)
        {
            rem=n%10;
            n/=10;
            dec+=rem*pow(2,i);
            ++i;
        } 
        printf("Answer is %d Decimal",dec);
    }else if(ch==2){
        printf("You Choose Decimal To Binary.....\n\n ");
        printf("Enter Decimal Number: ");        
        scanf("%d",&m);
        while (m!=0)
        {
            rem=m%2;
            m/=2;
            bin+=rem*o;
            o*=10;
        }
        printf("Answer in Binary is %d",bin);
    }else{
        printf("Enter Valid Command !!");
    }
    
return 0;
}