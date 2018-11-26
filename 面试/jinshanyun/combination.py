#!usr/bin/env python

'''
    [a,b,c]
    111->(a,b,c)
    110->(a,b)
    101->(a,c)
    100->(a)
    011->(b,c)
    010->(b)
    001->(c)
    000->()
'''
def PowerSetBinary(items):
    #generate all combination of N items
    N=len(items)
    #enumerate the 2**N possible combinations
    for i in range(2**N):
        combo=[]
        for j in range(N):
            if (i>>j)%2==1:
                combo.append(items[j])
        yield combo


