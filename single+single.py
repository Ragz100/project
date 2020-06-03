for i in range(int(input())):
    a=list(input())
    a1=set(a)
    b=False
    for j in list(a1):
        if a.count(j)>1:
            b=True
            break
    if b:
        print("Yes")
    else:
        print("No")
