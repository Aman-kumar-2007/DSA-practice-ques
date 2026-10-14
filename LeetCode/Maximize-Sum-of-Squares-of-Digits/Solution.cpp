    maxScore = 0
    num_nines = total_sum # getting all the 9 which are possible
    remainder = total_sum % 9 # getting the remainder

    if total_sum > 9 * num: # maximum number possible for having num digit is 9*num
        return ""

    num_zeros = num - num_nines - (1 if remainder > 0 else 0)

    digits = ([9] * num_nines) + ([remainder] if remainder > 0 else []) + ([0] * num_zeros)

    return (''.join(str(d) for d in digits))