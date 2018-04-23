#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
void printVector(float* a, int n)
{
      int i;
      for ( i=0; i<n; i++ )
      {
            printf("%2i:  %7.3f\n",i, a[i]);
      }
}

float myRand(float x, float y)
{
      /* this function should generate a random number between x and y */
      
      /* this generates a random between 0 and RAND_MAX */
      int r0 = rand();
      
      /* this generates a random number between 0 and 1 */
      float r1 = ((float)r0) / ((float)RAND_MAX);
      
      /* this stretches the interval of the random number */
      float r2 = (y - x) * r1;
      
      /* this moves the interval so that the a is the lower values */
      float r3 = r2 + x;

      return r3;
}

float sum(float* a, int n)
{
      float sum = 0;
      int i;
      for ( i=0; i<n; i++ ) 
      {
            sum += a[i];
      }
      return sum;
}

float average(float* a, int n)
{
      return sum(a,n)/n;
}

float lengthVector(float* a, int n){
	float sume1=0;
	int b = n-1;
	for( ;b>=0 ;b--){
		if(a[b]<0){
			sume1-=a[b];		
		}else{
			sume1+=a[b];
		}
	}
	return sqrt(sume1);
}

float sume(float a, float b){
	return a+b;
}

float* sumeByElements(float* a, float* b, int n){
	float* c;
	int e = n-1;
	for(;e>=0;e--){
		c[e]=a[e]+b[e];
	}
	return c;
}

float scalar(float* a, float* b, int n){
	float scalar_v=0;
	int i=0;
	for(;i<n;i++){
		scalar_v += a[i]*b[i];
	}
	return scalar_v;
}

float* scalar_vec(float* a, float* b, int n){
	float* scalar_v;
	int i=0;
	for(;i<n;i++){
		scalar_v[i] += a[i]*b[i];
	}
	return scalar_v;
}

int main()
{
      float vec1[10], vec2[10];

      /* seeding the random number generator: */
      srand(time(NULL));

      int i;
      for (i = 0; i < 10; i++)
      {
            /* generating a random floating point number between 0 and 1 */
            vec1[i] = myRand(-1,1);
            vec2[i] = myRand(-1,1);
      }

      printf("The vector1 is:\n");
      printVector(vec1, 10);
      printf("The vector2 is:\n");
      printVector(vec2, 10);

	  printf("The length of vector: %f .\n", lengthVector(vec1, 10));
	  printf("The length of vector: %f .\n", lengthVector(vec2, 10));
		
	  float *vec3 = sumeByElements(vec1, vec2, 10);
	  printf("The sume of vectors by elements: \n");
	  printVector(vec3, 10);
	  printf("The sume of vectors: %f .\n", sume(lengthVector(vec1,10), lengthVector(vec2, 10)));

	  printf("Scalar: %f \n", scalar(vec1, vec2, 10));
	  
	  if(lengthVector(scalar_vec(vec1, vec2, 10), 10)<=(lengthVector(vec1, 10)*lengthVector(vec2, 10)))
	  {  
			printf("True.\n");	
	  }else{
		  	printf("False.\n");
	  }
      return EXIT_SUCCESS;
}

