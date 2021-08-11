n = int(input())
i = 0
while(n>0):
    n -= 1
    prblm = input()
    if prblm.count('1') >= 2:
        i += 1
print(i)