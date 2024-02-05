#include <stdio.h>

void swap(int *a, int *b);

int main(){
	int array[] = {5,6,1,8,3,2};
	int *a = array;
	int i, clear = 0;
	int arrlength = sizeof(array)/sizeof(int);
	
	for(i = 0; clear != arrlength; i++){
		if(i == arrlength -1 && clear != arrlength){
			i = 0;
		}
		
		if(*(a+i) > *(a+i+1)){
			swap(a+i, a+i+1);
			clear = 0;
		} else {
			clear++;
		}
		
	}
	
	
	int x;
	
	for(x = 0; x < arrlength; x++){
		printf("%i", array[x]);
	}
}
/*
steps:
1. let length = sizeof array / sizeof int or length = |array|
2. loop condition is var. Clear != length
3. first check if the previous pass had no clear
	if i is already equal to the length -1 (since array started at 0 and length started at 1), and the variable clear is not
	equal to the length of the aray. if true, i is reset to zero (restarting the loop). if false, i is not reset to 0 and the loop ends
	
	the variable clear must be equal to |array| for the algorithm to consider the array as sorted. Representing as bit string with an and function. if there is
	a swap, it will automatically return false since it needs to meet the conditions of the and function (all true)        
	
	let |array| = 4, 0 = in the wrong place, 1 = in the right place
	suppose -> if index 0 and index 1 and index 2 and index 3 is equal to zero, then clear condition is true
	represented as
	
	{1,1,0,1} = false, restart the loop
	{1,1,1,1) = true, end loop
	
4. compare each index and swap accordingly. if there is a swap, var. clear is reverted to 0, if there is no swap, clear will increment by one

5. once the loop ends, return to condition 3
	
6. the loop will go back to condition 3 and this time it will end the loop since i == length and clear == length
*/
void swap(int *a, int *b){
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
