n = int(input())
if n%5 == 0:
    print(n/5)
elif n%5 == 1:
    a = ((n/5)-1)/3
    print(n/5-1+a)
elif n%5 == 2:
    a = ((n/5)-2)/3
    print(n/5-2)