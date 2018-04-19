#SubList

myList = [121, 2, 323, 44, 55, -66, 77]

min = myList[0]

for index in range(len(myList)):
    if(myList[index] < min):
        min = myList[index]
        
print("Our min value is:", min)

