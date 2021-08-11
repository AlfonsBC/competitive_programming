n = int(input())
x = 0
while(n>0):
    n-=1
    string = input()
    if string.count('+') == 2:
        x += 1
    else:
        x -= 1
print(x)