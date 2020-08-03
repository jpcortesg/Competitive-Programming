a = input().split(' ') # Number of words in the magazine and note
b = input().split(' ') # Words of magazine
c =  input().split(' ') # Words of note

def checkMagazine(megazine, note):

    res = 'Yes'

    dicMegazine = { }
    for word in megazine:
        if not word in dicMegazine: dicMegazine[word] = 0
        dicMegazine[word]+=1

    for word in note:
        if word in dicMegazine:
            dicMegazine[word]-=1
            if dicMegazine[word] < 0: res = 'No'
        else: res = 'No'

    print(res)

checkMagazine(b, c)
