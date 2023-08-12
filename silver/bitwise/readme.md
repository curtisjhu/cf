
Writing into a "bitstring"

x = 01010101011010

Access: (x & (1<<k)) = 1 or 0
Write 1: (x |= (1<<k))
Write 0: (x ^= (1<<k))

Write groups, exponents...
