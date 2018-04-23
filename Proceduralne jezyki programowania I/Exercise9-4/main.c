#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int myRand(int m) {
	return rand() % m + 1;
}

void printVector(int* a, int n)
{
      int i;
      for (i = 0; i < n; i++)
      {
            printf("%2i:  %3i\n",i+1, a[i]);
      }
}


int main()
{
      printf("This program generates lotto numbers.\n");
      int lotto[6];
      int maxRand = 49;
      int number;
      
      /* seeding the random number generator: */
      srand(time(NULL));

      /* initially put all lotto numbers to zero */
      int i;
      for ( i=0; i<6; i++ )
      {
            lotto[i] = 0;
      }

      int differentNumbers = 0;
      while ( differentNumbers < 6 )
      {
            number = myRand(maxRand);
            /* check if number is already in lotto */
            int found = 0;
            for ( i=0; i<differentNumbers; i++ )
            {
                  if (number == lotto[i]) found = 1;
            }
            /* if you arrive here, number is not in lotto */
            if (found == 0) 
            {
                  lotto[differentNumbers] = number;
                  differentNumbers++;
            }
      }

      printf("The vector is:\n");
      printVector(lotto, 6);

	  int e=0, r=0, size=6;
	  for(e=0;e<size-1;e++){
		for(r=e+1;r<size;r++){
			if(lotto[e]>lotto[r]){
				int a = lotto[e];
				lotto[e] = lotto[r];
				lotto[r] = a;
			}
		}
	  }
	  printVector(lotto, 6);


      return EXIT_SUCCESS;
}

