L1 =[0]
n = int(input())
# for i in range(n):
#     a = int(input())
#     L.append(a)
ls = list(map(int, input().split()))[:n+1] #조교님께서 도와주심
# print(L)

for i in range(n-1):
    if ls[i] > L1[-1]:
        L1.append(ls[i])

del L1[0]
print(len(L1))
print(*L1)#조교님께서 알려주심