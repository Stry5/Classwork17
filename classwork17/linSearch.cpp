#include "linSearch.h"
//source file for linear search
int linSearch(int arr[], int arrSize, int querey) {
	for (int i = 0; i < arrSize;i++) {
		if (arr[i] == querey) {
			return arr[i];
		}
	}
	return -1;
}
