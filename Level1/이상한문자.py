def solution(s):
    answer = []
    slist = list(s.split(' '))
    for s in slist:
        tmp = ''
        for i in range(len(s)):
            if i % 2 == 0:
                tmp += s[i].upper()
            else:
                tmp += s[i].lower()
        answer.append(tmp)            
    return ' '.join(answer)
