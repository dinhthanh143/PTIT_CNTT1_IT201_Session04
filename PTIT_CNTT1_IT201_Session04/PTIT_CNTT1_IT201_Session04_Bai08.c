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
void printAllItemIndex(int arr[], int size) {
   int value;
   int index;
   printf("moi nhap so muon tim:");
   scanf("%d", &value);
   printf("\n");
   int check = 1;
   for (int i =0; i<size; i++) {
      if (arr[i]==value) {
         index = i;
         printf("%d\t",index);
         check = 0;
      }
   }
   if (check) {
      printf("\n");
      printf("phan tu khong co trong mang");
   }
}
int main(){
   int size;
   int *arr = NULL;
   arr = insertArray(arr, &size);
   printAllItemIndex(arr, size);
   free(arr);

   return 0;
}
