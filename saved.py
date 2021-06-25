
A = [ "hard rock", 10, 1.2]
B = A[:] # clone by value i,e the changes performed on B remains in B and are not reflected back to A
B[0] = 'shourya'
print (A)
print (B)
B = A # clone by reference i,e the changes performed on either A 0r B are reflected back to the original memory location of the list i.e, were it started from that is A
B[0] = 'parashar'
print (A)