/*
Chef is currently facing the north direction. Each second he rotates exactly 90 degrees in clockwise direction. Find the direction in which Chef is facing after exactly X seconds.

Note: There are only 4 directions: North, East, South, West (in clockwise order).

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single integer X.
Output Format
For each testcase, output the direction in which Chef is facing after exactly X seconds.

Constraints
1≤T≤100
1≤X≤1000
Sample Input 1 
3
1
3
6
Sample Output 1 
East
West
South
Explanation
Chef is facing North in the starting.

Test Case 1: After 1 second he turns 90 degrees clockwise and now faces the east direction.

Test Case 2: Direction after 1 second- east

Direction after 2 seconds- south

Direction after 3 seconds- west*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,a;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a);
	    while(a>4)
	    a-=4;
	    switch(a){
	        case 1:
	        printf("East\n");
	        break;
	        case 2:
	        printf("South\n");
	        break;
	        case 3:
	        printf("West\n");
	        break;
	        case 4:
	        printf("North\n");
	        break;
	    }
	}
	return 0;
}
