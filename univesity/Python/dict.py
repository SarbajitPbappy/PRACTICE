K=[1001,1002,1003,1004,1005]
V=["USA","Canada","China","Japan","UK"]
# def createDict(K,V):
#     return dict(zip(K,V))
# print(createDict(K,V))

dic={}
for i in range(len(K)):
    dic[K[i]]=V[i]

print(dic)