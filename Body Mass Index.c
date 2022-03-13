/*
You are given the height H (in metres) and mass M (in kilograms) of Chef. The Body Mass Index (BMI) of a person is computed as M/H^2.

Report the category into which Chef falls, based on his BMI:

Category 1: Underweight if BMI ≤18
Category 2: Normal weight if BMI ∈{19, 20,…, 24}
Category 3: Overweight if BMI ∈{25, 26,…, 29}
Category 4: Obesity if BMI ≥30
Input:
The first line of input will contain an integer, T, which denotes the number of testcases. Then the testcases follow.
Each testcase contains a single line of input, with two space separated integers, M,H, which denote the mass and height of Chef respectively.
Output:
For each testcase, output in a single line, 1,2,3 or 4, based on the category in which Chef falls.

Constraints
1≤T≤2∗10^4
1≤M≤104
1≤H≤102
Its guaranteed that H^2 divides M.
Sample Input:
3
72 2
80 2
120 2
Sample Output:
1
2
4
Explanation:
Case 1: Since M/H^2=7222=18, therefore person falls in category 1.

Case 2: Since M/H^2=8022=20, therefore person falls in category 2.

Case 3: Since M/H^2=12022=30, therefore person falls in category 4.*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,m,h,bmi,output;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d %d",&m,&h);
	    bmi=m/(h*h);
	    if(bmi<=18)
	        output=1;
	    else if(bmi>18 && bmi<25)
	        output=2;
	    else if(bmi>24 && bmi<30)
	        output=3;
	    else if(bmi>=30)
	        output=4;
	   printf("%d\n",output);
	}
	return 0;
}
