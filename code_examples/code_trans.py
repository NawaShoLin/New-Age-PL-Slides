#!/usr/bin/env python3
import sys,re

filename = sys.argv[1]

f = open(filename, 'r')
s = f.read()
f.close()

replaces = {'>' : '&gt;', '<' : '&lt;', '&' : '&amp;'}

for i in replaces:
    s = s.replace(i, replaces[i])

print(s)

