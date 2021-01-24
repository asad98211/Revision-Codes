//ascending order sorting.

void swap(int& num1,int& num2){
	int temp=num1;
	num1=num2;
	num2=temp;
}

void heapify(int root,int size,int *arr){
	int min=root;
	int left=root*2+1;
	int right=root*2+2;
	if(left<size&&arr[left]<arr[min]){
		min=left;
	}
	if(right<size&&arr[right]<arr[min]){
		min=right;
	}
	if(min!=root){
		swap(arr[min],arr[root]);
		heapify(min,size,arr);
	}
}

int* heapSort(int size,int *arr){
	static int sortedArray[size];
	for(int i=size/2-1;i>=0;i--){
		heapify(i,size,arr);
	}
	for(int i=0,size-1;i<size;i++,j--){
		swap(arr[i],arr[j]);
		sortedArray[i]=arr[j];
		heapify(0,j,arr);
	}
	return sortedArray;
}
