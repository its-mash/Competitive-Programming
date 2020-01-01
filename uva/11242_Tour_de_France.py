import sys

#sys.stdin=open('in','r')
#sys.stdout=open('out','w')

line=input()
while line!='0':

    tm=input()
    fx=[int(i) for i in tm.split()]

    tm=input()
    rx=[int(i) for i in tm.split()]
    mx=[]
    for i in fx:
        for j in rx:
            mx.append(j/i)

    mx.sort()
    ans=-1;
    for i in range(1,len(mx)):
        ans=max(ans,mx[i]/mx[i-1])
    print('%.2lf'%ans)
    line=input()
