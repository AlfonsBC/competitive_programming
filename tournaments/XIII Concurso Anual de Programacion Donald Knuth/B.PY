n = int(input())
A = list(map(int, input().split()))
#print(A)
result = 0
for i in range(0,n,2):
    result += abs(A[i] - A[i+1])
print(result)