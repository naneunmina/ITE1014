Fibonazzi = [1, 1]

for k in range (2,21):
    Fibonazzi.append(Fibonazzi[k-1]+Fibonazzi[k-2])
    print("%i-th Fibonazzi sequence :"%(k+1),Fibonazzi[k])