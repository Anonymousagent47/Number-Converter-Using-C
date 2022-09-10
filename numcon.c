#include<stdio.h>
#include<math.h>
int convert(long n); //This is  a Function Which will return int value 
int main()
{
    int ch,rem,bin=0,dec=0,oct=0,i=0,o=1,m;
    long int n;
    printf("\n...........................\n");
    printf("WELCOME TO NUMBER CONVERTER\n");
    printf("............................\n\n");
    printf("Make Your Choice:-\n1. Binary To Decimal Converter\n2. Decimal To Binary Converter\n3. Binary To Octal Converter\n4. Decimal to Octal converter\n5. Octal to Decimal Converter\n");
    printf("Enter Your Choice: ");
    scanf("%d",&ch);

    if (ch==1)
    {
        printf("You Choose Binary To Decimal....\n");
        printf("Enter Binary Number: ");
        scanf("%ld",&n);
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
    }else if(ch==3){
        printf("You Choose Binary To Octal....\n");
        printf("Answer is %d Octal",convert(n));
    }else if(ch==4){
        int octal[100];//This is oct num Which will contain atleast 100 digits
        printf("You Choose Decimal To Octal....\n");
        printf("Enter Decimal Number: ");
        scanf("%ld",&n);
        int i=1;
        while(n!=0){  //Here While loop will Devide Number with 8
            octal[i++]=n%8;
            n/=8;
        }
        for (int j = i-1; j > 0; j--){ // This loop will Make numbers in Corrosponding Order
            oct=oct*10+octal[j];
        }
        printf("Answer is %d Octal",oct);
    }else if(ch==5){
        printf("You Choose Octal To Decimal....\n");
        printf("Enter Your Number: ");
        scanf("%d",&n);
        while(n!=0){
            rem=n%10;
            dec+=rem*pow(8,i++);
            n/=10;
        }
          printf("Answer is %d Decimal",dec);
    }else{
        printf("Enter Valid Command!!");
    }
return 0;
}




//Here We made function to calculate binary to octal
//we need to convert binary into decimal 7 then decimal to octal

int convert(long n){
    int oct=0,dec=0,i=0,rem;
        printf("Enter Binary Number: ");
        scanf("%ld",&n);
     while (n!=0)
        {
            rem=n%10;
            n/=10;
            dec+=rem*pow(2,i);
            ++i;
        } 
    i=1;
        while(dec!=0){
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}
