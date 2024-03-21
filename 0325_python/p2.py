list1 = [(7,5),(9,1),(5,3),(6,7),(2,4)]
list2 = []
list3 = []

for k in list1:
    k = list(k)
    k.reverse()
    list2.append(k)

list2.sort()

for k in list2:
    k.reverse()
    k = tuple(k)
    list3.append(k)

print(list3)