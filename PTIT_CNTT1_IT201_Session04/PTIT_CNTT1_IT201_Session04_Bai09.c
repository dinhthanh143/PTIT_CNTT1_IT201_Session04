#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int *insertArray(int *arr, int *size) {
   while (1) {
      printf("moi nhap so luong phan tu: ");
      scanf("%d", size);
      if (*size<1 || *size<100) {
         printf("so luong phan tu phai lon hon 0 va be hon 100.\n");
      }else {
         break;
      }
   }
   arr = (int*)realloc(arr, *size*sizeof(arr));
   for (int i = 0; i<*size; i++) {
      printf("\nmoi nhap phan tu thu %d:", i+1);
      scanf("%d", &arr[i]);
   }
   return arr;
}
int searchArray(int arr[], int left, int right,int value) {
    if (left>right) {
       return -1;
    }
      int mid = (left+right)/2;
      if (arr[mid] == value) {
         return mid;
      }else if (arr[mid]>value) {
         return searchArray(arr, left, mid - 1, value);
      }else {
         return searchArray(arr, mid+1, right, value);
      }

}
int *sortArray(int *arr, int size) {
   for (int i = 0; i<size; i++) {
      for (int j = 0; j<size-1-i; j++) {
         if (arr[j+1]<arr[j]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
   return arr;
}
int main(){
   int size;
   int *arr = NULL;
   arr = insertArray(arr, &size);
   arr = sortArray(arr, size);
   int value;
   printf("\nmoi nhap phan tu muon tim: ");
   scanf("%d", &value);
   int check = searchArray(arr, 0, size-1, value);
   if (check == -1) {
      printf("khong tim thay phan tu");
   }else {
      printf("phan tu co ton tai trong mang");
   }
   free(arr);
   return 0;
}
