# Interpolation formula

## Algorithms

Only Lagrange polynomial is implemented.

- [Lagrange polynomial](https://en.wikipedia.org/wiki/Lagrange_polynomial)
- [Newton polynomial](https://en.wikipedia.org/wiki/Newton_polynomial)


## Execution

```bash
$ cd lagrange
$ gcc lagrange.c -o lagrange
$ ./lagrange [Input file]
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

## Output

```
xx_1 yy_1
xx_2 yy_2
...
xx_m yy_m
```

## Sample Input/Output

Input
```

```

Output
```

```

## Reference

- http://homepage1.nifty.com/gfk/Lagrange.htm
- http://homepage3.nifty.com/gakuyu/suti/hokan/lag-pro1.pdf