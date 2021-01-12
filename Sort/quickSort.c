int partition(int list[], int left, int right) {
	int pivot, tmp;
	int low, high;

	low = left;
	high = right + 1;
	pivot = list[left];

	do {
		do {
			low++;
		} while (low <= right && list[low] < pivot);
		
		do {
			high--;
		} while (high >= left && list[high] > pivot);

		if (low < high) {
			SWAP(list[low], list[high], tmp);
		}
	} while (low < high);
}

void quickSort(int list[], int left, int right) {

	if (left < right) {
		int q = partition(list, left, right);

		quickSort(list, left, q - 1);
		quickSort(list, q + 1, right);
	}
}
