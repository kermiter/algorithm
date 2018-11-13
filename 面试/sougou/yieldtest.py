


def yieldTest(n):
    for i in range(n):
        yield call(i)
        print(i,',')

def call(n):
    return 2*n

for i in yieldTest(3):
    print("i=",i)

