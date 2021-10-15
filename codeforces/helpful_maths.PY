numbers = list(map(str, input().split("+")))
numbers.sort()
joined_string = "+".join(numbers)
print(joined_string)