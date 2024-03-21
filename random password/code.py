import random
def inti():
    x=chr(random.randint(48,57))
    return x
def upper():
    x=chr(random.randint(65,90))
    return x
def lower():
    x=chr(random.randint(97,122))
    return x
def create_pas(l):
    s=""
    for i in range(100):
        ch=random.randint(1,3)
        if ch==1:
            x=inti()
        if ch==2:
            x=upper()
        if ch==3:
            x=lower()
        s+=x
        if len(s)>=l:
            return s
length= int(input("Enter password length: "))
s=create_pas(length)
print(s)