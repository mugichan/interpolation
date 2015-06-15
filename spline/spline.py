#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys
from collections import deque

import scipy
from scipy import interpolate

if __name__ == "__main__":
    argv = sys.argv
    argc = len(argv)

    if (argc < 2):
        print "Need the input file"
        quit(1)

    f = open(argv[1])
    lines = f.readlines()
    input_q = deque(lines)

    data = input_q.popleft().split(" ")
    n = int(data[0])
    m = int(data[1])

    x = []
    y = []
    for i in range(0, n):
        data = input_q.popleft().split(" ")
        x.append(float(data[0]))
        y.append(float(data[1]))
    
    xx = []
    for i in range(0, m):
        xx.append(float(input_q.popleft()))
    
    tck = interpolate.splrep(x, y)
    yy = interpolate.splev(xx, tck, der=0)
    
    for i in range(0, m):
        print xx[i],
        print yy[i]


