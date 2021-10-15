str1_l = input()
str2_l = input()

str1 = str1_l.lower()
str2 = str2_l.lower()

if str1 < str2:
    print('-1')
elif str1 > str2:
    print('1')
elif str1 == str2:
    print('0')
