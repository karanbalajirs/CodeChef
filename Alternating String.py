'''
A binary string is called alternating if no two adjacent characters of the string are equal. Formally, a binary string T of length M is called alternating if Ti≠Ti+1 for each 1≤i<M.

For example, 0, 1, 01, 10, 101, 010, 1010 are alternating strings while 11, 001, 1110 are not.

You are given a binary string S of length N. You would like to rearrange the characters of S such that the length of the longest alternating substring of S is maximum. Find this maximum value.

A binary string is a string that consists of characters 0 and 1. A string a is a substring of a string b if a can be obtained from b by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.

Input Format
The first line of input contains an integer T, denoting the number of test cases. The T test cases then follow:
The first line of each test case contains an integer N.
The second line of each test case contains the binary string S.
Output Format
For each test case, output the maximum possible length of the longest alternating substring of S after rearrangement.

Constraints
1≤T≤104
1≤N≤105
S contains only the characters 0 and 1.
Sum of N over all test cases does not exceed 2⋅105.
Sample Input 1 
4
3
110
4
1010
4
0000
7
1101101
Sample Output 1 
3
4
1
5
Explanation
Test case 1: Swapping the second and third characters makes S=101. Hence the length of the longest alternating substring is 3 (choosing the entire string as a substring).

Test case 2: The given string S=1010 is an alternating string of length 4.

Test case 3: The length of the longest alternating substring is 1 for any rearrangement of S=0000.

Test case 4: One possible rearrangement of S is 1101011, which has an alternating substring of length 5 (the substring starting at index 2 and ending at index 6).'''
t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    s1=0
    s0=0
    total=0
    for j in range(n):
        if(s[j]=='1'):
            s1+=1;
        elif(s[j]=='0'):
            s0+=1;
    if(s0<s1):
        total=(s0+1)+s0
    elif(s0==s1):
        total=s0+s0
    elif(s1<s0):
        total=(s1+1)+s1
    print(total)
