n=int(input())
l=list(map(int,input().split()))
q=int(input())
for i in range(q):
    m=int(input())
    su=0
    f=-1
    co=0
    for j in l:
        su+=j
        co+=1
        if su>=m:
            break
    if su>=m:
        print(co)
    else:
        print(f)
