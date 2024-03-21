score =[]
sum1 = 0
sum2 = 0

N = int(input("How many students?:"))

for k in range(N) :
    score.append(int(input("%i-th score:"%(k+1))))
    sum1 += score[k]
    sum2 += (score[k]*score[k])

Mean = sum1/float(N)
Variance = sum2/float(N) - Mean*Mean

for k in range(N):
    print("The %i-th score is %i." %(k+1, score[k]))

print("mean = %6.2f\n, variance = %8.2f." %(Mean, Variance))