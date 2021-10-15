n = int(input())
A = list(map(int, input().split()))
#print(A)
B = A.copy()
B.sort()
if A == B:
    print(n)
else:
    cnt = 0
    for i in range(n):
        if A[i] == B[i]:
            cnt += 1
    print(cnt)