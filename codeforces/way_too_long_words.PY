n = int(input())
for i in range(n):
    wrd = input()
    if len(wrd) <= 10:
        print(wrd)
    else:
        frst = wrd[0]
        lst = wrd[-1]
        m = str(len(wrd)-2)
        string = frst + m + lst
        print(string)