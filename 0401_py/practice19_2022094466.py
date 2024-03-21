def ip():
    print("*"*15,"\n1. Calculate\n2. Show it!\n3. Initialize\n4. Quit\n"+"*"*15)
    I = int(input("Input :"))
    F = [0,1]
    if I == 1:
        num = int(input("Input yhe number :"))
        for i in range(num-1):
            a = F[i] + F[i+1]
            F.append(a)
        print("*"*15,"\n1. Calculate\n2. Show it!\n3. Initialize\n4. Quit\n"+"*"*15)
        I = int(input("Input :"))
        if I == 2:
            print(F)
            ip()
    elif I ==2:
        print(F)
        ip()
    elif I == 3:
        ip()

ip()