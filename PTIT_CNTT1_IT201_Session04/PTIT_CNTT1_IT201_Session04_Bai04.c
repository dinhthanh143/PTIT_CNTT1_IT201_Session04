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
void findLastItem( int arr[], int size) {
   int value;
   printf("moi nhap so muon tim:");
   scanf("%d", &value);
   for (int i = size-1; i>=0; i--) {
      if (arr[i] == value) {
         printf("%d", value);
         break;
      }
   }
   
}
int main(){
   int *arr = NULL;
   int size;
   arr = insertArray(arr, &size);
   findLastItem(arr, size);
   free(arr);

   return 0;
}
