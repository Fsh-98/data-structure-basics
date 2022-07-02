num = 6251413
temp = num
for i in range(len(str(num))):
    caps = temp // 10
    ans = temp % 10
    print(ans)
    temp = caps
