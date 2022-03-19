/*
A semester in Chef's University has 120 working days. The University's requirement is that a student should be present for at least 75% of the working days in the semester. If not, the student is failed.

Chef has been taking a lot of holidays, and is now concerned whether he can pass the attendance requirement or not. N working days have already passed, and you are given N bits - B1, B2, …, BN. Bi = 0 denotes that Chef was absent on the ith day, and Bi = 1 denotes that Chef was present on that day.

Can Chef hope to pass the requirement by the end of the semester?

Input:
First line will contain T, the number of testcases. Then the testcases follow.
Each testcase contains two lines of input.
The first line of each testcase contains a single integer, N, the number of days till now.
The second line of each testcase contains a string B of length N where Bi represents the status of the ith day.
Output:
For each testcase, output the answer in a single line - "YES" if Chef can pass the attendance requirement and "NO" if not.

Constraints
1≤T≤10
1≤N≤120
0≤Bi≤1
Sample Input 1 
3
50
00000000000000000000000000000000000000000000000000
50
01010101010101010101010101010101010101010101010101
2
01
Sample Output 1 
NO
YES
YES
Explanation
For Case 1, even if Chef attends all the remaining 70 days, he'll only have an attendance percentage of 70/120 = 58.33% which is less than 75%.

For Case 2, maximum attendance possible is 79.167% which is more than 75%.

For Case 3, maximum attendance possible is 99.167% which is more than 75%.

*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,j,n,b,sum=0,a;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    sum=0;
	    scanf("%d",&n);
	    for(j=0;j<n;j++){
	        scanf("%1d",&b);
	        if(b==1)
	        sum+=1;
	    }
	    a=sum+(120-n);
	    if(((a*100)/120)>=75)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}
