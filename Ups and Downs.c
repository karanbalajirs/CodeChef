/*
You will be given a zero-indexed array A. You need to rearrange its elements in such a way that the following conditions are satisfied:

A[i] ≤ A[i+1] if i is even.
A[i] ≥ A[i+1] if i is odd.
In other words the following inequality should hold: A[0] ≤ A[1] ≥ A[2] ≤ A[3] ≥ A[4], and so on. Operations ≤ and ≥ should alter.
Input
The first line contains a single integer T denoting the number of test cases. The first line of each test case contains an integer N, that is the size of the array A. The second line of each test case contains the elements of array A

Output
For each test case, output a single line containing N space separated integers, which are the elements of A arranged in the required order. If there are more than one valid arrangements, you can output any of them.

Constraints
1 ≤ N ≤ 100000
Sum of N in one test file ≤ 600000
1 ≤ A[i] ≤ 10^9
Example
Input:
2
2
3 2
3
10 5 2

Output:
2 3
2 10 5
 

Explanation
Example case 1.
A[0] ≤ A[1] is satisfied, 2 ≤ 3.
Example case 2.
A[0] ≤ A[1] is satisfied, 2 ≤ 10.
A[1] ≥ A[2] is satisfied, 10 ≥ 5.
Note: 5 10 2 is also valid answer.*/
#include <stdio.h>

int main(void) {
    int t,i=0,n,a[100000],k,l,temp,j;
    scanf("%d",&t);
    for(;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(k=0;k<n-1;k++){
            if(k%2==0){
                if(a[k]>a[k+1]){
                    temp=a[k+1];
                    a[k+1]=a[k];
                    a[k]=temp;}
            }
            else{
                if(a[k]<a[k+1]){
                    temp=a[k+1];
                    a[k+1]=a[k];
                    a[k]=temp;}
            }
        }
        for(l=0;l<n;l++){
            printf("%d ",a[l]);
        }
        printf("\n");
    }
	return 0;
}
