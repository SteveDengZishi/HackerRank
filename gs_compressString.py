#To compress a string from GGGGrrrrrtt to 4G5r2t

def  runLengthEncode(input):
#use a dictionary to map appearances is better than counting as it reduces chances of index overflow
#when doing string manipulation, hash table is a very useful tool whenever doing palindrome or counting
    dic={}
#use a list to keep track of the sequence of char as dictionary does not have an order
    lst=[]
    string=""
    for w in input:
        if w not in lst:
            lst.append(w)
        if w not in dic:
            dic[w]=1
        else:
            dic[w]+=1
    for key in lst:
        string+=str(dic[key])
        string+=str(key)
        
    return string
