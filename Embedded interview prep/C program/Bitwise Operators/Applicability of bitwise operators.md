## Applicability of bitwise operators

- Set bits
- Clear bits
- Toggle bits
- Test bits
--------------------------------------------------------------------------------------------------------------

## Setting bits
Lets say we have to set the 4th and 7th bits of 0 0 1 1 1 1 1 0
 - Use a mask value: 1 0 0 1 0 0 0 0
 - Xor original and masked value
 - 00111110
   10010000
   ---------
   10111110
   ---------
