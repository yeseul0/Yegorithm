def solution(participant, completion):
    from collections import Counter
    participant_count = Counter(participant)
    for p in completion:
        participant_count[p]-=1
    
    for key, item in participant_count.items():
        if participant_count[key]==1:
            return key