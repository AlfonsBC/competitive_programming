mat = [list(map(int, input().split())) for y in range(5)]
i = 0
for list in mat:
    if 1 in list:
        j = list.index(1)
        break
    i += 1
#print('i : ', i , 'j: ', j)
print(abs(i-2) + abs(j-2))
