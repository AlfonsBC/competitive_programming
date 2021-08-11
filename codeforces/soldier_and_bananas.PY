k,n,w = map(int, input().split())

result = (k *int((w+1)*w / 2))- n
if result>0:
    print(result)
else:
    print(0)