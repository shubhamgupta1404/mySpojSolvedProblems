a=[1,1,2,6,4]
lastdig=[6,2,4,8]

def R(n):
    y=n//5
    if(n<5):
        return a[n]
    if not (y):
        p=1
    else:
        p=lastdig[y%4]
    return (R(y)*R(n%5)*p)%10
    
while 1:
    try:
        N=input()
    except:
        break;
    print(R(int(N)))
