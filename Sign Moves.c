/*
Initially, Chef is at coordinate 0 on X-axis. For each i=1,2,…,N in order, Chef does the following:

If Chef is at a non-negative coordinate, he moves i steps backward (i.e, his position's coordinate decreases by i), otherwise he moves i steps forward (i.e, his position's coordinate increases by i).
You are given the integer N. Find the final position of Chef on the X-axis after N operations.

Input Format
The first line of input contains an integer T, denoting the number of test cases. The T test cases then follow:
The first and only line of each test case contains an integer N.
Output Format
For each test case, output in a single line the final position of Chef on the X-axis after N operations.

Constraints
1≤T≤105
1≤N≤109
Sample Input 1 
3
1
2
3
Sample Output 1 
-1
1
-2
Explanation
Test case 1: Initially, Chef is at coordinate 0 on X-axis. As 0 is non-negative, during the first operation Chef moves 1 step backward and reaches the coordinate −1.

Test case 2: Chef is at coordinate −1 on X-axis after the first operation. As −1 is negative, during the second operation Chef moves 2 steps forward and reaches the coordinate 1.*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,n,pos=0,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    pos=0;
	    if(n%2==1){
	        n=(n+1)/2;
	        pos=-n;
	    }
	    else{
	        pos=(n+1)/2;
	    }
	    printf("%d\n",pos);
	}
	return 0;
}
