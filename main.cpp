#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> arr, int left, int mid, int right){
	int n1=mid-left+1;
	int n2=right-mid;

	vector<int> leftArr(n1), rightArr(n2);

	for(int i=0; i<n1; i++){
		leftArr[i]=arr[left+i];
	}
	for(int i=0; i<n2; i++){
		rightArr[i]=arr[mid+1+i];
	}

	int i=0, j=0, k=left;
	while(i<n1 && j<n2){
		if(leftArr[i] <= rightArr[j]){
			arr[k]=leftArr[i];
			i++;
		}else{
			arr[k]=rightArr[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		arr[k]=leftArr[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=rightArr[j];
		j++;
		k++;
	}
}

int main(){
	return 0;
}