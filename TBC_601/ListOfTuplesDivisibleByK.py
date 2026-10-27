L = [(6, 12, 18), (4, 8, 10), (9, 15, 21)]
k = 3

for t in L:
    flag = True
    for x in t:
        if x % k != 0:
            flag = False
            break
    if flag:
        print(t)
