n = int(input())
A = [0]*n
while(n > 0):
    n -= 1
    flavor = input()
    A.append(flavor)
print(A[-1])