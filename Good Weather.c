/*
The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.

Given 7 integers A1,A2,A3,A4,A5,A6,A7 where Ai=1 denotes that the ith day of week in Chefland is a sunny day, Ai=0 denotes that the ith day in Chefland is a rainy day. Determine if the weather report of Chefland is Good or not.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, 7 space separated integers A1,A2,A3,A4,A5,A6,A7.
Output Format
For each testcase, print "YES" if the weather report of Chefland is Good, otherwise print "NO". Print the output without quotes.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤20
0≤Ai≤1
Sample Input 1 
4
1 0 1 0 1 1 1
0 1 0 0 0 0 1
1 1 1 1 1 1 1
0 0 0 1 0 0 0
Sample Output 1 
YES
NO
YES
NO
Explanation
Test case 1: The number of sunny days is 5 and the number of rainy days is 2. Hence the weather report of Chefland is Good.

Test case 2: The number of sunny days is 1 and the number of rainy days is 6. Hence the weather report of Chefland is not Good.*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,count=0,count1=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    count=0;
	    count1=0;
	    for(int j=0;j<7;j++){
	        scanf("%d",&a);
	        if(a==1)
	            count++;
	        else
	            count1++;
	        
	    }
	    if(count > count1 )
	        printf("YES\n");
	    else
	        printf("NO\n");}
	return 0;
}
