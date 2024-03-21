# list1 = [2, 4, 1, 7, 3, 6]
# list2 = [8, 6, 5, 1, 4, 9]

class mvs :
    def calculation_mean(self,arr):
        counter = 0
        for num in arr:
            counter += num
        return counter/len(arr)
    def calculate_var(self,arr):
        mean = self.calculate_mean(arr)
        counter = 0
        for num in arr:
            counter += (mean - num)**2
        return counter/len(arr)
    def sort_list(self,arr):
        new = []
        for k in range(0, len (arr)) :
            num = arr[k]
            if k == 0:
                new.append(num)
            else:
                for i in range(0, len(new)):
                    if new[i] >= num :
                        new.insert(i, num)
                        break
                    if i == len(new)-1:
                        new.append(num)
                    if new[i]> num:
                        break
        return new
#             a = (k - self. calculate_mean)^2
#             self.var.append(a)
#             self.calculat_var = float(sum(self.var)//len(self.var))
#         self.sort = self[:]
#         n = len(self.sort)
#         for i in range(n-1) :
#             for k in range (i+1, n):
#                 if self.sort[i]> self.sort[k]:
#                     tem = self.sort[i]
#                     self.sort[i] = self.sort[k]
#                     self.sort[k] = tem
#         return self.sort
#     def __str__(self):


# list1 = mvs()
# list2 = mvs()

# print(list1)
# print(list2)

list1 = [2, 4, 1, 7, 3, 6]
list2 = [8, 6, 5, 1, 4, 9]
mvs = mvs()