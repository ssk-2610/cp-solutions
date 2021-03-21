for i in range(int(input())):
    y,x=map(int,input().split())
    q=max(y,x)
    diag=q**2-(q-1)
    if(min(y,x)==x):
        qw=y%2
        if(qw==1):
            res=diag-(y-x)
        else:
            res=diag+(y-x)
    else:
        qw=x%2 
        if(qw==1):
            res=diag+(x-y)
        else:
            res=diag-(x-y)
    print(res)