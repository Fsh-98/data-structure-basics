string = "aaabcccdeeef"

lst = list(string)

#print(lst)
unique_list = []

for i in range(len(lst)):
    if lst[i] not in unique_list:
        unique_list.append(lst[i])
#print(unique_list)

dic = {}
#temp_dic = {}
count = 0

for i in range(len(unique_list)):
    for j in range(len(lst)):
        if (unique_list[i] == lst[j]):
            count += 1
    dic.update({unique_list[i]: count})
    count = 0
print(dic)

min_val = 99999999

for key, value in dic.items():
    if min_val > value:
        min_val =value
print(min_val)

for key, value in dic.items():
    if min_val == value:
        print(key)
        break
