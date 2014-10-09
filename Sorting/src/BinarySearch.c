#include <stdio.h>
#include "BinarySearch.h"

int binarySearch(int target, int array[], int startIndex, int endIndex){
	int midPoint;
	midPoint = ((endIndex - startIndex)/ 2) + startIndex;
	printf("%d\n", array[midPoint]);
	
	if(target < array[midPoint]){
		if(endIndex == midPoint && target != array[midPoint]){
			return -1;
		}
		endIndex = midPoint;
		binarySearch(target, array, startIndex, endIndex);
	}else if(target > array[midPoint]){
		if(array[midPoint + 1] == target){
			return midPoint+1;
		}else if(startIndex == midPoint && target != array[midPoint]){
			return -1;
		}
		startIndex = midPoint;
		binarySearch(target, array, startIndex, endIndex);
	}else if(target == array[midPoint]){
		return midPoint;
	}
	


}