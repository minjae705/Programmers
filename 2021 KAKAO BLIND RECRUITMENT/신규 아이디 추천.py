def solution(new_id):
    #1
    new_id = new_id.lower()
    #2
    for i in new_id:
        if ord(i) >=97 and ord(i)<=122:
            continue
        elif i>='0' and i<='9':
            continue
        elif i=='-' or i=='_' or i=='.':
            continue
        else:
            new_id = new_id.replace(i, '')
    #3
    while '..' in new_id:
        new_id = new_id.replace('..','.')
    #4
    if len(new_id)>0:
        if new_id[0]=='.':
            if len(new_id)==1:
                new_id = ''
            else:
                new_id = new_id[1:]
    if len(new_id)>0:
        if new_id[len(new_id)-1]=='.':
            if len(new_id)==1:
                new_id = ''
            else:
                new_id = new_id[:len(new_id)-1]
    #5
    if new_id=='':
        new_id = 'a'
    #6
    if len(new_id)>=16:
        new_id = new_id[:15]
    if new_id[len(new_id)-1]=='.':
        new_id = new_id[:len(new_id)-1]
    #7
    if len(new_id)<=2:
        while(len(new_id)<3):
            new_id += new_id[len(new_id)-1]
    return new_id
  
# 다른 사람의 풀이
# 나는 정규식 패턴이 생각이 안나ㅎ..
# import re
# def solution(new_id):
#     st = new_id
#     st = st.lower()
#     st = re.sub('[^a-z0-9\-_.]', '', st)
#     st = re.sub('\.+', '.', st)
#     st = re.sub('^[.]|[.]$', '', st)
#     st = 'a' if len(st) == 0 else st[:15]
#     st = re.sub('^[.]|[.]$', '', st)
#     st = st if len(st) > 2 else st + "".join([st[-1] for i in range(3-len(st))])
#     return st
