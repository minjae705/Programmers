def solution(n):
    answer = ''
    i = 0
    while 1:
        answer += '수'
        i += 1
        if i==n : break
        answer += '박'
        i += 1
        if i==n : break
    return answer
