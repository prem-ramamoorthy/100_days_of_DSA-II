def isCircularSentence(sentence):
        l = sentence.split(" ")
        if(len(l)==1):
            return l[0][0] == l[0][-1]
        n = len(l)
        for i in range(len(l)) :
            if (i+1 != n) :
                if(l[i][-1] != l[i+1][0]):
                    return False
            else:
                return l[0][0] == l[-1][-1]
        return True

print(isCircularSentence("leetcode exercises sound delightful"))