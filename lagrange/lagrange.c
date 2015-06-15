#include <stdio.h>
#include <stdlib.h>

#define MAX_POINTS_NUM 1000

int main (int argc, char** argv) {
  FILE *fp;
  int i, j;
  int n,m;
  double x[MAX_POINTS_NUM][2];
  double xx[MAX_POINTS_NUM];

  if (argc <= 1) {
    printf("Need the input file\n");
    return 1;
  }
  if (!(fp = fopen(argv[1], "r"))) {
    printf("Cannot open the input file.\n");
    return 1;
  }
  
  if (fscanf(fp, "%d %d\n", &n, &m) != 2 || n <= 0 || m <= 0) {
    printf("Invalid value.\n ");
    return 2;
  }
  
  for (i = 0; i < n; i++) {
    if (fscanf(fp, "%lf %lf\n", &(x[i][0]), &(x[i][1])) != 2) {
      printf("Invalid value.\n ");
      return 3;
    }
  }
  for (j = 0; j < m; j++) {
    if (fscanf(fp, "%lf\n", &(xx[j])) != 1) {
      printf("Invalid value.\n ");
      return 3;
    }
  }

  return 0;
}
