//#include <stdio.h>
//#include <assert.h>
//
//
//struct S {
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//
//
//int main() {
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//struct S arr3[] = { {"����",20} ,{"����",30} };
//	//struct S arr4[3] = { 0 };
//	my_memcpy(arr2, arr1,sizeof(arr1));
//	//memcpy(arr4, arr3, sizeof(arr3));
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	
//
//	getchar();
//	return 0;
//}