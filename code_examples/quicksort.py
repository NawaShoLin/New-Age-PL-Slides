def quick_sort(ary):
    if not ary : return []
    left  = quick_sort([ x for x in ary[1:] if x <  ary[0] ])
    right = quick_sort([ x for x in ary[1:] if x >= ary[0] ])
    return left + ary[0:1] + right

