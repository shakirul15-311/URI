import math 
def is_prime(n):
    if n%2 == 0 and n>2:
        return False
    return all(n%i for i in range(3,int(math.sqrt(n))+1,2))

T = int(input())
for _ in range (T):
    n = int(input())
    if (is_prime(n)):
        print('%d eh primo' %n)
    else:
        print('%d nao eh primo' %n)
