#include<stdio.h>
#include<math.h>
int binarytooctal(long n);
int octaltobinary(long n);
int main()
{
    int ch,rem,bin=0,dec=0,oct=0,i=0,o=1;
    long int n;
    char opt;
    printf("\n...........................\n");
    printf("WELCOME TO NUMBER CONVERTER\n");
    printf("............................\n\n");

    printf("Which Converter You Want To Use\nA. Binary Converter\nB. Octal Converter\nC. Decimal Converter\nD. Hexadecimal Converter\n\n");
    printf("Enter Choice:- ");
    scanf("%c",&opt);

    if(opt=='A'||opt=='a'){
        printf("WELCOME TO BINARY CONVERTER\n");
        printf(".............................\n\n");

        printf("Different Binary Converter...\n1. Binary To Decimal\n2. Binary To Octal\n\n");
        printf("Enter Your Choice:- ");
        scanf("%d",&ch);
        if (ch==1){
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
        printf("You Choose Binary To Octal....\n");
        printf("Answer is %d Octal",binarytooctal(n));
        }else{
        printf("Enter Valid Value !!");
        }
    }else if(opt=='B'||opt=='b'){
        printf("WELCOME TO OCTAL CONVERTER\n");
        printf("............................\n\n");

        printf("Different Octal Converter...\n1. Octal To Decimal\n2. Octal To Binary\n\n");
        printf("Enter Your Choice:- ");
        scanf("%d",&ch);
        if(ch==1){
            printf("You Choose Octal To Decimal....\n");
        printf("Enter Octal Number: ");
        scanf("%d",&n);
        while(n!=0){
            rem=n%10;
            dec+=rem*pow(8,i++);
            n/=10;
        }
          printf("Answer is %d Decimal",dec);
        }else if(ch==2){
            printf("you choose Octal To Binary....\n");
        printf("Answer is %d Binary",octaltobinary(n));
        }else{
            printf("Enter Valid Value !!");
        }

    }else if(opt=='C'||opt=='c'){
        printf("WELCOME TO DECIMAL CONVERTER\n");
        printf(".............................\n\n");
        printf("Different Decimal Converter...\n1. Decimal to Binary\n2. Decimal To Octal\n\n");
        printf("Enter Your Choice:- ");
        scanf("%d",&ch);

        if(ch==1){
            printf("You Choose Decimal To Binary.....\n\n ");
        printf("Enter Decimal Number: ");        
        scanf("%d",&n);
        while (n!=0)
        {
            rem=n%2;
            n/=2;
            bin+=rem*o;
            o*=10;
        }
        printf("Answer in Binary is %d",bin);
        }else if(ch==2){
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
        }else{
            printf("Enter Valid Value !!");
        }
    }else if(opt=='D'||opt=='d'){
        printf("Hexadecimal Converter Will be Uploaded Soon...\n");
        printf("Keep Upadated On Github....");
    }else{
        printf("Enter Valid Value !!");
    }
return 0;
}

/* ALL CREATED FUNCTION WILL BE DEFINED HERE */ 


int binarytooctal(long n){
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


int octaltobinary(long n){
    int oct=0,dec=0,i=0,rem,bin=0;
    printf("Enter Octal Number: ");
    scanf("%d",&n);    
     while(n!=0){
            rem=n%10;
            dec+=rem*pow(8,i++);
            n/=10;
        }
        i=1;
        while (dec!=0)
        {
            rem=dec%2;
            dec/=2;
            bin+=rem*i;
            i*=10;
        }
        return bin;
}
