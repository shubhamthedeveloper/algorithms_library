#include <sys/time.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>

using namespace std;
void merge(int arr[], int start, int mid, int end) {
    int temp[end-start];
    int i = start;
    int j = mid+1;
    int k = 0;
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    if (i <= mid) {
        while(i <= mid) {
            temp[k++] = arr[i++];
        }
    } else if (j <= end) {
        while( j <= end) {
            temp[k++] = arr[j++];
        }
    }
    k=0;
    for(int l = start; l <=end ; l++) {
        arr[l] = temp[k++];
    }
}

long getTimeinMicroSeconds() {
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec * 1000000 + start.tv_usec;
}


void mergesort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = (end+start)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main() {
    int n;
    cin >> n;
		int arr[n];
		long starttime, endtime;
		for(int i = 0; i < n; i++) {
			arr[i] = n-i;
		}
		starttime = getTimeinMicroSeconds();
		mergesort(arr, 0 , n-1);
		endtime = getTimeinMicroSeconds();

		cout << "time = " <<endtime -starttime << endl;


		//for(int i = 0; i < n; i++) {
		//  cout << arr[i] << endl;
		//}
}
