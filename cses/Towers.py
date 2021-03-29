from bisect import bisect_right

n=int(input())
a=list(map(int,input().split()))
l=[]
tot=0
for i in a:
    pos=bisect_right(l,i)
    if pos>=tot:
        l+=[i]
        tot+=1
    else:
        l[pos]=i
print(tot)
