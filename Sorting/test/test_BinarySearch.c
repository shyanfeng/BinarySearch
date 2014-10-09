#include "unity.h"
#include "BinarySearch.h"

void setUp(void){}

void tearDown(void){}

void test_binary_search_with_target_1_not_in_array_should_return_negative_1(void){
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 1;
	int returnArray;
	
	returnArray = binarySearch(target, array, startIndex, endIndex);
	
	TEST_ASSERT_EQUAL(-1, returnArray);
}

void test_binary_search_with_target_2_in_array_should_return_0(void){
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 2;
	int returnArray;
	
	returnArray = binarySearch(target, array, startIndex, endIndex);
	
	TEST_ASSERT_EQUAL(0, returnArray);
}

void test_binary_search_with_target_4_in_array_should_return_1(void){
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 4;
	int returnArray;
	
	returnArray = binarySearch(target, array, startIndex, endIndex);
	
	TEST_ASSERT_EQUAL(1, returnArray);
}

void test_binary_search_with_target_6_in_array_should_return_2(void){
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 6;
	int returnArray;
	
	returnArray = binarySearch(target, array, startIndex, endIndex);
	
	TEST_ASSERT_EQUAL(2, returnArray);
}

void test_binary_search_with_target_12_in_array_should_return_5(void){
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 12;
	int returnArray;
	
	returnArray = binarySearch(target, array, startIndex, endIndex);
	
	TEST_ASSERT_EQUAL(5, returnArray);
}

void test_binary_search_with_target_16_in_array_should_return_7(void){
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 14;
	int returnArray;
	
	returnArray = binarySearch(target, array, startIndex, endIndex);
	
	TEST_ASSERT_EQUAL(6, returnArray);
}

void test_binary_search_with_target_19_not_in_array_should_return_negative_1(void){
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 19;
	int returnArray;
	
	returnArray = binarySearch(target, array, startIndex, endIndex);
	
	TEST_ASSERT_EQUAL(-1, returnArray);
}