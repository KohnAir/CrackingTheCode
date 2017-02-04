
def find_zero_one_edit(s1, s2):
    size = 0
    s1_size = True
    same_size = False
    if len(s1) > len(s2) + 1 or len(s2) > len(s1) + 1:
        return False

    diff = 0
    i, j = 0, 0
    while i < len(s1) and j < len(s2):
        if s1[i] != s2[j]:
            diff += 1
            if diff > 1:
                return False
            if len(s1) > len(s2):
                i += 1
            elif len(s2) > len(s1):
                j += 1
        i, j = i+1, j+1
    return True


if find_zero_one_edit('pale', 'bake'):
    print('True')
else:
    print('False')
