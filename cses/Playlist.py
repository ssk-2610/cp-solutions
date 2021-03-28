n=int(input())
a=list(map(int,input().split()))
s=set()
j=0
ct=0
for i in range(n):
    while a[i] in s:
        s.remove(a[j])
        j+=1
    s.add(a[i])
    ct=max(ct,len(s))
print(ct)