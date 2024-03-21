list1 = ["Mike","","Emma","Kally","","Brad"]

for a in range(1,7):
    if "" in list1:
        list1.remove("")
    else:
        continue

print(list1)