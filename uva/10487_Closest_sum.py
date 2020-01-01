import sys
import bisect as bn

#sys.stdin=open('in','r')
#sys.stdout=open('out','w')

n=int(input())
cs=1
while n!=0:
    ex=[0 for i in range(n)]
    for i in range(n):
        ex[i]=int(input())
    #print(ex)
    m=int(input())
    #print(m)
    fx=[]
    for i in range(n-1):
        for j in range(i+1,n):
            fx.append(ex[i]+ex[j])
    fx.sort()
    #print(fx)
    print(f"Case {cs}:")
    for i in range(m):
        q=int(input())
        h=bn.bisect_left(fx,q,lo=0,hi=len(fx))
        h= h if h!=len(fx) else h-1
        l= h-1 if h-1>=0 else h
        #print(l,h)
        ans=0
        if abs(fx[l]-q) <= fx[h]-q:
            ans=fx[l]
        else:
            ans=fx[h]
        print(f'Closest sum to {q} is {ans}.')

    cs+=1
    n=int(input())
