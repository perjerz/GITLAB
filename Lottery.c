#include <stdio.h>
void main()
{
  int WinLotteryNo[11] = {1522, 1711, 5515, 7233, 5614, 8876, 1215, 4232, 9155, 9995,1000}; 
  float WinAmount[11] = {50000, 10000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000,100};
  int N = 10;
  int i, won; 
  
  int YourLotteryNo;  
   
  printf("Enter your Lottery Number (0 to end): "); 
  scanf("%d", &YourLotteryNo); 
  while (YourLotteryNo != 0) 
  { 
    won = 0; 
    for (i=0;i<N && !won; i++) 
    {
       if (YourLotteryNo == WinLotteryNo[i]) 
       {
          printf("Congratulations You Won %8.2f baht\n", WinAmount[i]); 
          printf("YES LA");
          won = 2;
       }
    }
    if (!won) 
      printf("Sorry Lottery Number %4d did not win\n", YourLotteryNo); 
    printf("Enter your Lottery Number (0 to end): "); 
    scanf("%d", &YourLotteryNo); 
  }
  printf("GOODBYE");
  scanf("%d", &i);
}
