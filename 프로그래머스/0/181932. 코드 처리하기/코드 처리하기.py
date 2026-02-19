def solution(code):
    mode = 0
    ret=""
    for idx in range(len(code)):
        if code[idx] == '1':
            mode=(mode+1)%2
        elif idx % 2 == 0 and mode == 0:
            ret+=code[idx]
        elif idx % 2 == 1 and mode == 1:
            ret+=code[idx]
    

    if len(ret)==0:
        return "EMPTY"
    return ret