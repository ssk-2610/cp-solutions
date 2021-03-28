n,x=map(int,input().split())
a=list(map(int,input().split()))
d=dict()
d[0]=1
ct=0
sum1=0
b=[0]
for i in range(n):
    sum1+=a[i]
    if sum1 in d:
        d[sum1]+=1
    else:
        d[sum1]=1
    q=sum1-x
    if q in d:
        ct+=d[q]
if(x==0):
    ct-=n
print(ct)