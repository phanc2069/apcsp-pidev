#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

float pascaltriangle (float a) {
    int rows, coef=1, space, i, j;
    rows = scanf("%d", &rows);
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
    return i;
}

int main (int argc, char *argv[]) {
 char input[1028], name [1028];
 float age;
 int arg = 0;
 float r;
 int c = 0;
 float csize;
 int g;

  r = atof(argv[arg+1]);
  printf("%f\n", r);
  csize = pascaltriangle(r);
  printf("Pascal Triangle with %d rows is %f\n", arg+1, csize);
  arg++;
}
