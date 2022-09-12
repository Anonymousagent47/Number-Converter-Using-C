#include<stdio.h>
#include<math.h>
int binarytooctal(long n);
int octaltobinary(long n);
int main()
{
    int ch,rem,bin=0,dec=0,oct=0,i=0,o=1;
    long int n;
    char opt,hex[100];
    printf("\n...........................\n");
    printf("WELCOME TO NUMBER CONVERTER\n");
    printf("............................\n\n");

    printf("Which Converter You Want To Use\nA. Binary Converter\nB. Octal Converter\nC. Decimal Converter\nD. Hexadecimal Converter\n\n");
    printf("Enter Choice:- ");
    scanf("%c",&opt);

    if(opt=='A'||opt=='a'){
        printf("\nWELCOME TO BINARY CONVERTER\n");
        printf(".............................\n\n");

        printf("Different Binary Converters...\n1. Binary To Decimal\n2. Binary To Octal\n\n");
        printf("Enter Your Choice:- ");
        scanf("%d",&ch);
        if (ch==1){
        printf("You Choose Binary To Decimal....\n");
        printf("\nEnter Binary Number: ");
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
        printf("\nWELCOME TO OCTAL CONVERTER\n");
        printf("............................\n\n");

        printf("Different Octal Converters...\n1. Octal To Decimal\n2. Octal To Binary\n\n");
        printf("Enter Your Choice:- ");
        scanf("%d",&ch);
        if(ch==1){
            printf("You Choose Octal To Decimal....\n");
        printf("\nEnter Octal Number: ");
        scanf("%d",&n);
        while(n!=0){
            rem=n%10;
            dec+=rem*pow(8,i++);
            n/=10;
        }
          printf("Answer is %d Decimal",dec);
        }else if(ch==2){
            printf("You Choose Octal To Binary....\n");
        printf("Answer is %d Binary",octaltobinary(n));
        }else{
            printf("Enter Valid Value !!");
        }

    }else if(opt=='C'||opt=='c'){
        printf("\nWELCOME TO DECIMAL CONVERTER\n");
        printf(".............................\n\n");
        printf("Different Decimal Converters...\n1. Decimal to Binary\n2. Decimal To Octal\n\n");
        printf("Enter Your Choice:- ");
        scanf("%d",&ch);

        if(ch==1){
            printf("You Choose Decimal To Binary.....\n\n ");
        printf("\nEnter Decimal Number: ");        
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
        printf("\nEnter Decimal Number: ");
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
        printf("WELCOME TO HEXADECIMAL CONVERTER\n");
        printf(".................................\n\n");
        printf("Different Hexadecimal Converters...\n1. Hexadecimal To Binary\n");
        printf("\nEnter Your Choice:- ");
        scanf("%d",&ch);
        if (ch==1){
        char binarynum[1000], hexa[100]; //Here binarynum variable declares the binary value
        long int i = 0;
 
    printf("Enter Hexadecimal Number:- ");
    scanf("%s", hexa);
     printf("Answer is "); //so according to upper comment we don't need to address binarynum variable here
   //Answer Will be automatically show in binary
            while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0': printf("0000"); 
        break;
        case '1': printf("0001"); 
        break;
        case '2': printf("0010"); 
        break;
        case '3': printf("0011"); 
        break;
        case '4': printf("0100"); 
        break;
        case '5': printf("0101"); 
        break;
        case '6': printf("0110"); 
        break;
        case '7': printf("0111"); 
        break;
        case '8': printf("1000"); 
        break;
        case '9': printf("1001"); 
        break;
        case 'A': printf("1010"); 
        break;
        case 'B': printf("1011"); 
        break;
        case 'C': printf("1100"); 
        break;
        case 'D': printf("1101"); 
        break;
        case 'E': printf("1110"); 
        break;
        case 'F': printf("1111"); 
        break;
        case 'a': printf("1010"); 
        break;
        case 'b': printf("1011"); 
        break;
        case 'c': printf("1100"); 
        break;
        case 'd': printf("1101"); 
        break;
        case 'e': printf("1110"); 
        break;
        case 'f': printf("1111"); 
        break;
        default: printf("\n Invalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
        }else{
            printf("Enter Valid Command !");
        }
        
    }else{
        printf("Enter Valid Value !!");
    }
return 0;
}

/* ALL CREATED FUNCTION WILL BE DEFINED HERE */ 


int binarytooctal(long n){
    int oct=0,dec=0,i=0,rem;
        printf("\nEnter Binary Number: ");
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
    printf("\nEnter Octal Number: ");
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
