n = int(input())
string = input()
count = 0
for i in range(n-1):
    if string[i] == string[i+1]:
        count += 1
print(count)