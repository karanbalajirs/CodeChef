/*
Recently, Devendra went to Goa with his friends. Devendra is well known for not following a budget.

He had Rs. Z at the start of the trip and has already spent Rs. Y on the trip. There are three kinds of water sports one can enjoy, with prices Rs. A, B, and C. He wants to try each sport at least once.

If he can try all of them at least once output YES, otherwise output NO.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input containing five space-separated integers Z,Y,A,B,C.
Output Format
For each test case, print a single line containing the answer to that test case — YES if Devendra can try each ride at least once, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤10
104≤Z≤105
0≤Y≤Z
100≤A,B,C≤5000
Sample Input 1 
3
25000 22000 1000 1500 700
10000 7000 100 300 500
15000 5000 2000 5000 3000
Sample Output 1 
NO
YES
YES
Explanation
Test Case 1: After spending Rs. 22000 on the trip already, Devendra is left with Rs. 3000. The water sports cost a total of 1000+1500+700=3200. So, he does not have enough money left to try all the watersports.

Test Case 2: After spending Rs. 10000 on the trip, he is left with Rs. 3000. The water sports cost a total of 100+300+500=900. So, he has enough money to try all the watersports.

Test Case 3: After spending Rs. 5000 on the trip, he is left with Rs. 10000. The water sports cost a total of 2000+5000+3000=10000. So, he still has enough money left to try all the watersports.
*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,z,y,a,b,c;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d %d %d %d %d",&z,&y,&a,&b,&c);
	    z=z-y;
	    if(z>=a+b+c)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}
