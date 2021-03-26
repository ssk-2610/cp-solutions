for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    w=a[0]
    for i in range(1,n):
        w=w^a[i]
    if(w==0):
        print('second')
    else:
        print('first')