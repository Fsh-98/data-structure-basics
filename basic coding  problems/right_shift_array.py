arr = [1,2,3,4,5]

print(arr)

n = int(input())

temp = arr[0]

for i in range(n):
    for i in range(len(arr) -1):
        c = arr[i+1]
        arr[i+1] = temp
        temp = c
    arr[0] = temp
    
print(arr)
    
    
