def solution(n):
    nlist=list(str(n))
    nlist=sorted(nlist, reverse=True)
    answer=int("".join(nlist))
    return answer
