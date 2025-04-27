#include<stdio.h>  //ATM machine
struct account
{
 int balance;
 int pin;
}; 
int main()
{
  struct account ob[5];
  int a,n,pin,wt,k,i,j,f=0,m,e;
  for(i=0;i<5;i++)
  {
    printf("\n enter the pin of user %d",i+1);
    scanf("%d",&ob[i].pin);
  }
  for(i=0;i<5;i++)
  {
    printf("\n enter the balance of the users ");
   scanf("%d",&ob[i].balance);
  }
  printf("\n ENTER THE OPERATION YOU WISH TO PERFORM");
  printf("\n 1.withdraw\n 2.balance enquiry \n3.add money \n4.pin change");
  scanf("%d",&a);
  if(a==1)
   {
    printf("\n enter your pin to access the account ");
   scanf("%d",&n);
    for(i=0;i<5;i++) 
     { 
      if(ob[i].pin==n)
       {
         f=1;
         printf("\n You can now access your account. \n WELCOME");
         printf("\n enter the amount that you wish to withdraw");
         scanf("%d",&wt);
         if(wt>=2000)
          {
           while(wt>=2000)
          {
           wt=wt-2000;
           j++;
          }
         printf("\n the no of 2000 notes you get is %d",j);
         ob[i].balance=ob[i].balance - (j*2000);
          }
         j=0;
        if(wt>=500)
        {
         while(wt>=500)
          {
            wt=wt-500;
            j++;
          }
          printf("\n the no of 500 notes u received is %d",j);
          ob[i].balance=ob[i].balance - (j*500);    
          }
          j=0; 
        if(wt>=200)
        {
          while(wt>=200)
          {
           wt=wt-200;
           j++;
          }
          printf("\n the no of 200 notes u received is %d",j);
          ob[i].balance=ob[i].balance - (j*200);
          }
          j=0;
        if(wt>=100)
        {
          while(wt>=100)
         {
          wt=wt-100;
          j++;
         }
          printf("\n the no of 100 notes u received is %d",j);
          ob[i].balance=ob[i].balance - (j*100);
          }
         j=0;
         if(wt>=50)
         {
         while(wt>=50)
         {
          wt=wt-50;
          j++;
          }
          printf("\n the no of 50 notes u received is %d",j);
          ob[i].balance=ob[i].balance - (j*50);
       }
        printf("\n your reamining balance is %d",ob[i].balance);
      }
     }
  if(f==0)
   {
     printf("\n Your pin is wrong thus your transaction is cancelled");
   }
 }
 else if(a==2)
 {
   printf("\n enter your pin to access the account ");
   scanf("%d",&n);
   for(i=0;i<5;i++)
   {
     if(ob[i].pin==n)
     {
       printf("the balance for this account is %d",ob[i].balance);
       break;
     }
   }
 }
 else if(a==3)
 {
   printf("\n enter your pin to access the account ");
   scanf("%d",&n);       
   printf("enter the money you wish to add in your account");
   scanf("%d",&m);
   for(i=0;i<5;i++)
   {
     if(ob[i].pin==n)
     {
       ob[i].balance=ob[i].balance+m;
       printf("your new balance is %d",ob[i].balance);
       break;
     }
   }
  }
 else if(a==4)
 {
   printf("\n enter your pin to access the account ");
   scanf("%d",&n);
   for(i=0;i<5;i++)
   {
     if(ob[i].pin==n)
     {
      printf("enter your new pin");
      scanf("%d",&e);
      ob[i].pin=e;
      printf("your pin has been successfully changed");
      break;
     }
   }
}      
  return 0;
}
