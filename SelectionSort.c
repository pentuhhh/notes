#include <stdio.h>
void swap(int * arr1, int * arr2);

int main(){
	int unsortedarr[10] = {1,3,5,7,9,2,4,6,8,10};
	int fullpass = 0;
	int *array = unsortedarr;
	int i, j;
	
	printf("Unsorted array: \n");
	for(j = 0; j <= 9; j++){
		printf("%i ", unsortedarr[j]);
	}
	printf("\n\n");
	
		for(i = 0; i <= 9; i++){
			if(*(array + i) > *(array + i + 1)){
				swap(array + i, array + i + 1);
				i = 0;
			}
		}
	printf("Sorted array: \n");
	for(j = 0; j <= 9; j++){
		printf("%i ", unsortedarr[j]);
	}
}

void swap(int * arr1, int * arr2){
	int temp;
	temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}
