#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int *insertArray(int *arr, int *size) {
   while (1) {
      printf("moi nhap so luong phan tu: ");
      scanf("%d", size);
      if (*size<1 || *size>100) {
         printf("so luong phan tu phai lon hon 0 va be hon 100.\n");
      }else {
         break;
      }
   }
   arr = (int*)realloc(arr, *size*sizeof(int));
   for (int i = 0; i<*size; i++) {
      printf("\nmoi nhap phan tu thu %d:", i+1);
      scanf("%d", &arr[i]);
   }
   return arr;
}
int *sortArray(int *arr, int size) {
   for(int i=0;i<size;i++){
      for(int j=0;j<size-1-i;j++) {
         if(arr[j+1]<arr[j]) {
            int temp = arr[j];
                  arr[j]=arr[j+1];
                    arr[j+1]=temp;
         }
      }
      }
  
   return arr;
}
void binarySearch(int *arr, int size) {
   int value;
   printf("moi nhap so muon tim:");
   scanf("%d", &value);
   int left = 0;
   int right = size-1;
   int mid;
   int check = 1;
   while (left <= right) {
      mid = (left + right)/2;
      if (arr[mid] == value){
            printf("\nphan tu co trong mang");
            check = 0;
            break;
      }else if (arr[mid] < value) {
         left = mid + 1;
      }else {
         right = mid - 1;
      }
   }
   if (check) {
     printf("\n phan tu khong co trong mang");
   }

}
int main(){
   int size;
   int *arr = NULL;
   arr = insertArray(arr, &size);
   arr = sortArray(arr, size);
   binarySearch(arr, size);
   free(arr);

   return 0;
}
