list1 = [1,1,2,3,4,4,5]
list2 = []

for k in list1:
    list3 = list1[:]
    list3.remove(k)
    if k not in list3:
        list2.append(k)

print(list2)