#!/usr/bin/python3
for i in range(ord('a'), ord('z') + 1):
    if i == 113 and i == 101:
        continue
    print("{:c}".format(i), end="")
