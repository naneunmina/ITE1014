n = int(input())
ans = -1
# i=n//5
for i in range (n//5,0,-1):
    if (n-i*5)%3==0:
        ans = i+(n-i*5)//3
        break
print(ans)