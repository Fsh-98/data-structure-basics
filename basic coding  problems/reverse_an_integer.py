num = 6251413
temp = num
lst = []
for i in range(len(str(num))):
    caps = temp // 10
    ans = temp % 10
    #print(ans)
    lst.append(str(ans))
    temp = caps
ans_str = int(''.join(lst))
print(ans_str)
