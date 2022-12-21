t=int(input())
while(t):
    n=int(input())
    s=input()
    if(s.find("11")):
        print("2")
    elif not(s.find("1")):
        print("0")
    else:
        print("1")
    t=t-1