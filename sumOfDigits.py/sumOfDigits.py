list1 = [12, 67, 98, 34]
list2 = []

print("The orginal list is :",list1)

for k in list1 :
    a = k//10
    b = k%10
    list2.append(a+b)

print("List linteger Sumation :", list2)