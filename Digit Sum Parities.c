/*For a positive integer M, MoEngage defines digitSum(M) as the sum of digits of the number M (when written in decimal).

For example, digitSum(1023)=1+0+2+3=6.

Given a positive integer N, find the smallest integer X strictly greater than N such that:

digitSum(N) and digitSum(X) have different parity, i.e. one of them is odd and the other is even.
Input Format
The first line contains an integer T, the number of test cases. The description of the T test cases follow.
Each test case consists of a single line of input with a single integer, the number N.
Output Format
For each test case, print in a single line, an integer, the answer to the problem.
Constraints
1≤T≤1000
1≤N<109
Sample Input 1 
3
123
19
509
Sample Output 1 
124
21
511
Explanation
Test Case 1: digitSum(123)=1+2+3=6 is even and digitSum(124)=1+2+4=7 is odd, so the answer is 124.

Test Case 2: digitSum(19)=1+9=10 is even, digitSum(20)=2+0=2 is also even, whereas digitSum(21)=2+1=3 is odd. Hence, the answer is 21.

Test Case 3: digitSum(509)=5+0+9=14 is even, digitSum(510)=5+1+0=6 is also even, whereas digitSum(511)=5+1+1=7 is odd. Hence, the answer is 511.*/
#include <stdio.h>
int digitsum(int n){
    int sum=0,r=0;
    while(n!=0){
        r=n%10;
        n/=10;
        sum+=r;
    }
    return sum;
}
int main(void) {
	// your code goes here
	int t,i,n,temp;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    temp=n;
	    if(digitsum(temp)%2==1){
	        while(1){
	            n++;
	            if(digitsum(n)%2==0){
	                printf("%d\n",n);
	                break;
	            }
	    }}
	    else if(digitsum(temp)%2==0){
	        while(1){
	            n++;
	            if(digitsum(n)%2==1){
	                printf("%d\n",n);
	                break;
	            }
	        }
	    }
}}
