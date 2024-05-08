def sort(mylst):
    for i in range(0,len(mylst)):
        for j in range(i+1,len(mylst)):
            if mylst[i]>mylst[j]:
                mylst[i],mylst[j]=mylst[j],mylst[i]
    return mylst
def reverse(mylst):
    return mylst[::-1]
mylst=[181, 178, 187, 182, 192, 189, 202, 201]
print(sort(mylst))
print(reverse(mylst))