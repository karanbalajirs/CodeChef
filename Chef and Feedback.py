'''Lots of geeky customers visit our chef's restaurant everyday. So, when asked to fill the feedback form, these customers represent the feedback using a binary string (i.e a string that contains only characters '0' and '1'.

Now since chef is not that great in deciphering binary strings, he has decided the following criteria to classify the feedback as Good or Bad :

If the string contains the substring "010" or "101", then the feedback is Good, else it is Bad. Note that, to be Good it is not necessary to have both of them as substring.

So given some binary strings, you need to output whether according to the chef, the strings are Good or Bad.

Input
The first line contains an integer T denoting the number of feedbacks. Each of the next T lines contains a string composed of only '0' and '1'.

Output
For every test case, print in a single line Good or Bad as per the Chef's method of classification.

Constraints
1 ≤ T ≤ 100
1 ≤ |S| ≤ 105

Sum of length of all strings in one test file will not exceed 6*106.
Example
Input:
2
11111110
10101010101010


Output:
Bad
Good


Explanation
Example case 1.
The string doesn't contain 010 or 101 as substrings.

Example case 2.
The string contains both 010 and 101 as substrings.'''
# cook your dish here
t=int(input())
for i in range(t):
    s=input()
    a=0
    for j in range(len(s)-2):
        if(s[j]=='0' and s[j+1]=='1' and s[j+2]=='0'):
            a+=1
        elif(s[j]=='1' and s[j+1]=='0' and s[j+2]=='1'):
            a+=1
    if(a!=0):
        print("Good")
    else:
        print("Bad")
