double lambda (int i, double xx, double x[][2], int n) {
  int j;
  double lam = 1.0;
  for (j = 0; j < n; j++) {
    if (i != j) {
      lam *= (xx - x[j][0])/(x[i][0]-x[j][0]);
    }
  }
  return lam;
}

double lagrange (double xx, double x[][2], int n) {
  int i, j;
  double l;
  double yy = 0.0;
  for (i = 0; i < n; i++) {
    yy += x[i][1] * lambda(i, xx, x, n);
  }
  return yy;
}
