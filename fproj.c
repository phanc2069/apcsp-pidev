#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main (int argc, char *argv[]) {
 char input[1028];
 float age;
 int arg = 0;
 int c = 0;
 int g, y, z;
 int rows, coef=1, space, i, j;
 if(atoi(argv[1])>=atoi(argv[2])) {
   if(isdigit(*argv[1])) {
     rows = atoi(argv[1]);
     for (i=0; i<rows; i++) {
       for (space=1; space <= rows-i; space++)
           printf("  ");
       for (j=0; j<=i; j++) {
         if (j==0 || i==0)
             coef = 1;
         else
             coef=coef*(i-j+1)/j;
         printf("%4d", coef);
       }
       printf("\n");
    }
  }
    if(argv[2] == 0) {
    for(i=(rows-1); i<rows; i++) {
     for (space=1; space <= rows-i; space++) {
           printf("  ");
      }     
      for (j=0; j<=i; j++) {
       if (j==0 || i==0) {
          coef = 1;
       }   
         else {
             coef=coef*(i-j+1)/j;
             printf("%4d", coef);
         }    
     }
     printf("\n");
  }
  return 0;
 }
  if(isdigit(*argv[2])) {
  if(atoi(argv[2]) != 0) {
   for(i=(rows-1); i<rows; i++) {
        for (j=(atoi(argv[2]+3)); j<atoi(argv[2]); j++) {
          if (j==0 || i==0) {
              coef = 1;
          }   
          else {
              coef=coef*(i-j+1)/j;
          }
        }
      printf("\nIn row %d, the value you seek is %d.", rows, coef);
      printf("\n");
     }
    }
    else {
      for(i=(rows-1); i<rows; i++) {
      for (space=1; space <= rows-i; space++)
            printf("  ");
        for (j=0; j<=i; j++) {
          if (j==0 || i==0)
              coef = 1;
          else
              coef=coef*(i-j+1)/j;
              printf("%4d", coef);
      }
      printf("\nHere is row %d", rows);
      printf("\n");
    }
   }
  }
 }
}
