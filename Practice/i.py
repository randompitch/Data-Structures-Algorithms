L1 = ['r','e','s','t','a','u','r','a','n','t']
input_list = eval(input("Enter a list of words: "))
result = []
for word in input_list:
    flag = False
    for i in word:
        if i in L1:
            flag = True
        else:
            flag = False
            break
    if(flag == True):
        result.append(word)
print(result)