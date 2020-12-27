#include <stdio.h>
#include <math.h>

int main(){

//----------------------1--------------------------

  /*int i,n=0;
  printf ("type a number\n");
  scanf("%d",&n);
  for (i=1;i<=n;i++){
    printf("%d ",i);
  }*/

//--------------------2--------------------------

  /*int i,n=0;
  printf ("type a number\n");
  scanf("%d",&n);
  for (i=n;i>=1;i=i-1){
    printf("%d ",i);
  }*/

//--------------------3---------------------------

  /*char n='A';
  for (n='A';n<='Z';++n){
    printf("%c ",n);
  }*/

//--------------------4---------------------------

  /*int i;
  for (i=1;i<=100;i++){
    if (i%2==0){
      printf("%d ",i);
  }
}*/

//----------------------5---------------------------

  /*int i;
for (i=1;i<=100;i++){
  if (i%2!=0){
    printf("%d ",i);
}
}*/

//----------------------6----------------------------

  /*int i,n,sum=0;
printf("Enter a positive number\n");
scanf("%d",&n);
for (i=1;i<=n;i++){
    sum=sum+i;
}
printf("The sum is: %d",sum);*/

//----------------------7------------------------------

  /*int i,n,sum=0;

  printf("Enter a number\n");
  scanf("%d",&n);

  for ( i = 1; i <= n; i++){
    if( i%2==0){
      sum+=i;
    }
  }
printf(" sum : %d",sum);*/

//----------------------8-----------------------------

  /*int i,n,sum=0;

printf("Enter a number\n");
scanf("%d",&n);

for ( i = 1; i <= n; i++){
  if( i%2!=0){
    sum+=i;
  }
}
printf(" sum : %d",sum);*/

//----------------------9------------------------------

  /*int i,n,mul=1;

  printf("Enter a number\n");
  scanf("%d",&n);

  for ( i=1;i<=n;i++){
    mul*=i;
  }
  printf("result : %d",mul);*/

//---------------------10-----------------------------

  /*long long int n,count=0;

  printf("Enter an integer to find out the number of digets in it\n");
  scanf("%lld",&n);

  while (n != 0){
    n/=10;
    ++count;
  }
  printf("The no. of digits are : %d",count);*/

//-----------------------11----------------------------
  /*long long int firstDigit , lastDigit , n , temporary ;

  printf("Enter the number you want to find the first and the last digit of\n");
  scanf("%lld",&n);

  temporary = n;
  lastDigit = temporary % 10;

  while ( temporary >= 10 ){
    temporary = temporary/10;
  }

  firstDigit = temporary % 10;

  printf("first digit : %lld\n",firstDigit);
  printf("last digit : %lld",lastDigit);*/

//------------------------12----------------------------

  /*long long int firstDigit , lastDigit , n , temporary ;

  printf("Enter the number of which you want to find the \nsum of it's first and the last digit \n");
  scanf("%lld",&n);

  temporary = n;
  lastDigit = temporary % 10;

  while ( temporary >= 10 ){
    temporary = temporary/10;
  }

  firstDigit = temporary % 10;

  printf("sum : %lld + %d = %d \n",firstDigit, lastDigit,firstDigit+lastDigit);*/

//----------------------------13---------------------------

  /*long long int newNumber , n , temporary ;
  int lastDigit,firstDigit;

  printf("Enter a number\n");
  scanf("%lld",&n);

  lastDigit = n % 10;

  temporary = (int)log10(n);
  firstDigit = n/pow(10,temporary);

  newNumber = lastDigit*(int)pow(10,temporary);
  newNumber = newNumber + n%(int)pow(10,temporary);
  newNumber = newNumber - lastDigit + firstDigit;

  printf("%d",newNumber);*/

//-------------------------14-------------------------------

  /*int n , m , sum=0 ;
  printf("type an intenger\n");
  scanf("%d",&n);

  while ( n != 0){
    m = n%10;
    sum += m;
    n/=10;
  }
  printf("%d",sum);*/

//-------------------------15---------------------------------

  /*int n , m , mul=1 ;
  printf("type an intenger\n");
  scanf("%d",&n);

  while ( n != 0){
    m = n%10;
    mul *= m;
    n/=10;
  }
  printf("%d",mul);*/

//---------------------------16--------------------------------

  /*long long int n , m , newNumber=0;
  printf("Enter a number\n");
  scanf("%d",&n);

  while( n != 0 ){
    m = n%10;
    newNumber = (newNumber*10) + m;
    n = n/10;
  }
  printf("%d",newNumber);*/

//---------------------------17-------------------------------

  /*long long int n , m , newNumber=0,originalNumber;
  printf("Enter a number\n");
  scanf("%d",&n);
  originalNumber=n;
  while( n != 0 ){
    m = n%10;
    newNumber = (newNumber*10) + m;
    n = n/10;
  }
  if ( originalNumber == newNumber ){
    printf("It is a palindrome number\n");
  }
  else{
    printf("It is not a palindrome number\n");
  }*/

//-------------------------18---------------------------------

  /*unsigned long long int n,m;
  printf("Enter a positive integer\n");
  scanf("%llu",&n);
  int frequency[10]={0};
  while ( n!=0){
    m=n%10;
    frequency[m]++;
    n/=10;
  }
  printf("The frequency of different digits are :\n");
  for (int i=0;i<=9;i++){
    printf("frequency of %d = %d\n",i,frequency[i]);
  }*/

//-------------------------19--------------------------------

  /*unsigned long long n,newNumber=0;
  int m;
  char names[10][20]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  printf("Enter a positive intenger\n");
  scanf("%llu",&n);
  while(n!=0){
    m=n%10;
    newNumber=(10*newNumber)+m;
    n/=10;
  }
  while(newNumber!=0){
    m=newNumber%10;
    printf("%s ",*(names+m));
    newNumber/=10;
  }*/

//-------------------------20--------------------------------

  /*char c;
  printf("Enter a chatacter to find it's ASCII value\n");
  scanf("%c",&c);
  printf("The ASCII value of %c is %d\n",c,c);*/

//------------------------21----------------------------------

  /*int n,power,i,mul=1;
  printf("Enter the number you want to find the power of\n");
  scanf("%d",&n);
  printf("Enter the power\n");
  scanf("%d",&power);

  for ( i=0;i<power;i++){
    mul*=n;
  }
  printf("\n");
  printf("%d",mul);*/

//-------------------------22---------------------------------

/*int num, i;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Factors of %d are: ", num);
  for (i = 1; i <= num; ++i) {
      if (num % i == 0) {
          printf("%d ", i);
      }
  }*/

//---------------------------23-------------------------------

  /*int n;
  unsigned long long factorial=1;
  printf("Enter a number\n");
  scanf("%d",&n);

  for( int i=1;i<=n;i++ ){
    factorial*=i;
  }
  printf("\nThe factorial of %d is %llu",n,factorial);*/

//--------------------------24-----------------------------

   /*int n1, n2, hcf;
   printf( "Enter 2 postive integer" );
   scanf( "%d %d" ,&n1,&n2 );
   for ( int i=1;i<=n1 && i<=n2;i++ ){
     if( n1%i==0 && n2%i==0 ){
       hcf=i;
     }
   }
   printf( "The HCF is %d",hcf );*/

//--------------------------25----------------------------

  /*int n1, n2, hcf, lcm;
  printf( "Enter 2 postive integer" );
  scanf( "%d %d" ,&n1,&n2 );
  for ( int i=1;i<=n1 && i<=n2;i++ ){
    if( n1%i==0 && n2%i==0 ){
      hcf=i;
    }
  }
  lcm = (n1*n2)/hcf;
  printf("The LCM is %d\n",lcm);*/

//--------------------------26---------------------------

  /*int n,flag=0;
  printf( "Enter a positive integer\n" );
  scanf( "%d",&n );
  for( int i=2;i<n;i++ ){
    if( n%i==0 ){
      flag=1;
      break;
    }
  }
  printf("\n");
  if( n==1 ){
    printf("1 is neither a prime nor a composite number.\n");
  }
  else if( flag==0 ){
    printf( "It is a prime number\n" );
  }
  else{
    printf("It is not a prime number\n");
  }*/

  //-------------------------27------------------------------

  /*int n,i,j;
  printf( "Enter a positive number\n" );
  scanf( "%d",&n );

  if( n==1 ){
    printf( "1 is neither a prime nor a composite number\n" );
  }
  else{
    printf("The prime numbers are :\n");
    for ( i=2;i<=n;i++ ){
      int flag=0;
      for ( j=2;j<i;j++ ){
        if ( i%j == 0 ){
          flag=1;
          break;
        }
      }
        if ( flag==0 ){
          printf( "%d ",i );
        }
    }
  }*/

  //---------------------------28-------------------------------

  /*int n,i,j,sum=0;
  printf( "Enter a positive number\n" );
  scanf( "%d",&n );

  if( n==1 ){
    printf( "1 is neither a prime nor a composite number\n" );
  }
  else{
    for ( i=2;i<=n;i++ ){
      int flag=0;
      for ( j=2;j<i;j++ ){
        if ( i%j == 0 ){
          flag=1;
          break;
        }
      }
        if ( flag==0 ){
          sum+=i;
        }
    }
    printf("sum : %d\n",sum);
  }*/

//--------------------------29-----------------------------------

  /*int n,i,j;
  printf( "Enter a positive integer\n" );
  scanf( "%d",&n );

  if ( n==1 ){
    printf( "1 is neither a prime nor a composite number\n" );
  }
  else{
    printf( "The prime factors are:\n" );
    for( i=2;i<=n;i++ ){
      if( n%i==0 ){
        int flag=0;
          for ( j=2;j<i;j++ ){
            if ( i%j==0 ){
              flag=1;
              break;
            }
          }
          if ( flag==0 ){
            printf("%d ",i);
          }
      }
    }
  }*/

//--------------------------30---------------------------

  /*int n,m,originalNumber,newNumber=0;
  printf( "Enter a 3 digit number\n" );
  scanf( "%d",&n );
  originalNumber=n;
  while( originalNumber != 0 ){
    m = originalNumber % 10;
    newNumber = newNumber + m*m*m;
    originalNumber/=10;
  }
  if ( n == newNumber ){
    printf( "It's an Armstrong number\n" );
  }
  else{
    printf("It's not an Armstrong number\n");
  }*/

//--------------------------31---------------------------

  /*int n,i,newNumber=0,m;
  printf("Enter a three digit number\n");
  scanf("%d",&n);
  printf("The Armstrong numbers are:\n");
  for ( i=100;i<=n;i++ ){
    while ( i != 0 ){
      m = i % 10;
      newNumber = newNumber + (m*m*m);
      i/=10;
    }
    if ( newNumber = i ){
      printf("%d",i);
    }
    newNumber = 0;
  }*/

//---------------------------32-----------------------------

  


 return 0;
}
