n = int(input())
def get_num(array):
    cnt = 0
    #print(array)
    n = len(array)
    to_fit = n*'1'
    while(array != to_fit):
        cnt += 1
        k = array.count('0') - 1
        array = list(array)
        if array[k] == '0':
            array[k] = '1'
            array=''.join(array)
            #print(array)
        else:
            array[k] = '0'
            array=''.join(array)
            #print(array)
    return cnt

def gcd(a, b):
    """Calculate the Greatest Common Divisor of a and b.

        Unless b==0, the result will have the same sign as b (so that when
        b is divided by it, the result comes out positive).
        """
    while b:
        a, b = b, a % b
    return a

#print(get_num('110'))

#import itertools
#result = ["".join(item) for item in itertools.product("01", repeat=n)]
def printAllKLength(set, k):
    
    n = len(set)
    printAllKLengthRec(set, "", n, k)
 
# The main recursive method
# to print all possible
# strings of length k
def printAllKLengthRec(set, prefix, n, k):
    # Base case: k is 0,
    # print prefix
    if (k == 0) :
        print(prefix)
        return
 
    # One by one add all characters
    # from set and recursively
    # call for k equals to k-1
    for i in range(n):
 
        # Next character of input added
        newPrefix = prefix + set[i]
         
        # k is decreased, because
        # we have added a new character
        printAllKLengthRec(set, newPrefix, n, k - 1)

    
set=['0','1']
A = printAllKLength(set, n)


#print(result)
sum = 0
for string in A:
    sum += get_num(string)

#from fractions import Fraction
#print(Fraction(sum, 2 ** n))
y = 2**n
common_div = gcd(sum, y)


print(str(int(sum/common_div))+'/'+str(int(y/common_div)))
