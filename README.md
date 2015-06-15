# Interpolation formula

## Algorithms

Only Lagrange polynomial is implemented.

- [Lagrange polynomial](https://en.wikipedia.org/wiki/Lagrange_polynomial)
- [Spline](https://en.wikipedia.org/wiki/Spline_(mathematics))
- [Newton polynomial](https://en.wikipedia.org/wiki/Newton_polynomial)


## Execution

### Lagrange polynomial

```bash
$ cd lagrange
$ gcc lagrange.c -o lagrange
$ ./lagrange [Input file]
```

### Spline

Install

```bash
$ sudo apt-get install python-scipy
```

Execute

```bash
$ cd spline
$ ./spline.py [input file]
```

## Input file format

n:  # of distinct points
m: # of interpolation points
x_i, y_i: the i-th distinct point (0 < i <= n)
xx_j: the j-th interpolation point (0 < j <= m)

```
n m
x_1 y_1
x_2 y_2
...
x_n y_n
xx_1
xx_2
...
xx_m

```

## Output file format

```
xx_1 yy_1
xx_2 yy_2
...
xx_m yy_m
```

## Sample Input/Output

Input

```
4 16
-1 0.8
-0.2 -0.5
0.9 -1
2 2
-1.0
-0.8
-0.6
-0.4
-0.2
0.0
0.2
0.4
0.6
0.8
1.0
1.2
1.4
1.6
1.8
2.0
```

Output with Lagrange polynomial

```
-1.00000 0.80000
-0.80000 0.45753
-0.60000 0.11786
-0.40000 -0.20575
-0.20000 -0.50000
0.00000 -0.75161
0.20000 -0.94729
0.40000 -1.07377
0.60000 -1.11776
0.80000 -1.06596
1.00000 -0.90511
1.20000 -0.62191
1.40000 -0.20309
1.60000 0.36465
1.80000 1.09458
2.00000 2.00000
```

## Reference

- http://homepage1.nifty.com/gfk/Lagrange.htm
- http://homepage3.nifty.com/gakuyu/suti/hokan/lag-pro1.pdf