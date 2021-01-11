void insertionSort(int list[], int n) {
	int i, j, key;

	for (i = 1; i < n; i++) {
		key = list[i];	// 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사한다.

		for (j = i - 1; j >= 0 && list[j] > key; j--) {
			list[j + 1] = list[j];			
		}

		list[j + 1] = key;
	}
}
