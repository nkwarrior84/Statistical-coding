'''
An English text needs to be encrypted using the following encryption scheme.
First, the spaces are removed from the text. Let L be the length of this text.
Then, characters are written into a grid, whose rows and columns have the following constraints:
                     floor(root(L)) < row < column < ceil(root(L))


Example

s = if man was meant to stay on the ground god would have given us roots

After removing spaces, the string is 54 characters long. root(54) is between 7 and 8, so it is written in the form of a grid with 7 rows and 8 columns.

ifmanwas  
meanttos          
tayonthe  
groundgo  
dwouldha  
vegivenu  
sroots
Ensure that row*columns>=L
If multiple grids satisfy the above conditions, choose the one with the minimum area, i.e. .
The encoded message is obtained by displaying the characters of each column, with a space between column texts. The encoded message for the grid above is:

imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn sseoau

Create a function to encode a message.

Function Description

Complete the encryption function in the editor below.

encryption has the following parameter(s):

string s: a string to encrypt
Returns

string: the encrypted string
'''
import math
import os
import random
import re
import sys

#
# Complete the 'encryption' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def encryption(s):
    L = len(s)
    rows = int(math.floor(L**(0.5)))
    columns = int(math.ceil(L**(0.5)))
    output = ""
    for i in range(columns):
        k = i
        for j in range(k,L,columns):
            output+=s[j]
        output+=" "
    return output

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    result = encryption(s)

    fptr.write(result + '\n')

    fptr.close()
