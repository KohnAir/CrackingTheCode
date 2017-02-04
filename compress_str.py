from collections import Counter

def compress(str_to_compress):
#    hist = dict((c, str_to_compress.count(c)) for c in str_to_compress)
#creating histogram = dicitionary for each character we hold
# the number of occurrences (the below is exactly as the above

    occurrences = Counter(str_to_compress)
    lst = sorted(occurrences.keys())
    res = ''
    for i in range(len(lst)):
        s = str(lst[i])+str(occurrences[lst[i]])
        res = str(res) + s
    return res

str_to_compress = 'aaaadgevbddd'
print(compress(str_to_compress))
