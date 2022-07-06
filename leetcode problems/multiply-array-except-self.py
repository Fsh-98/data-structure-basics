arr = [1,2,3,4]
ans_lst = []
mul = 1

for i in range(len(arr)):
    for j in range(len(arr)):
        if(i != j):
            mul = mul * arr[j]
    ans_lst.append(mul)
    mul = 1
    
print(ans_lst)
