n,k = map(int, input().split())
l = list(map(int, input().split()))
i = 0
temp = l[k-1]
for x in l:
    if x and x >= temp:
        i += 1
print(i)

