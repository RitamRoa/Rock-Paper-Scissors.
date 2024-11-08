#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int youchoice;
    srand(time(0));
    int compchoice = rand()%3 + 1;
    printf("enter 1 for Rock, 2 for Paper and 3 for Scissors\n\n");
    scanf("%d",&youchoice);
    switch (youchoice)
    {
    case 1:
       printf("YOU CHOSE ROCK\n\n");
        break;
    case 2:
       printf("YOU CHOSE PAPER\n\n");
       break;
    case 3:
      printf("YOU CHOSE SCISSORS\n\n");
      break;
    
    default:
     printf("ERROR!, TRY AGAIN, ONLY TYPE IN THE REQUIRED INPUT!\n");
        return 1;
    }
    
    if (compchoice==1)
    {
       printf("COMPUTER CHOSE ROCK\n\n");
    }
    else if(compchoice==2)
    {
        printf("COMPUTER CHOSE PAPER\n\n");

    }
    else
    {
      printf("COMPUTER CHOSE SCISSORS\n\n");
    }
    if (youchoice == compchoice)
    {
        printf("TIE!\n");
    }
    else if (youchoice==1 && compchoice==3 ||
             youchoice==2 && compchoice==1 ||
             youchoice==3 && compchoice==2    )
    {
        printf("YOU WON! :)\n\n");
    }
    else{
        printf("YOU LOSE!! HAHA\n\n");
    }
  return 0;
}
