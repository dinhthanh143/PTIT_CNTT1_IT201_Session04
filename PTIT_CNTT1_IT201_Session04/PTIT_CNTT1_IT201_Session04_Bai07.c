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
void findSymmertrical(int arr[], int size) {
   int j = size-1;
   int check = 1;
   for (int i = 0; i<size/2; i++) {
      if (arr[i] == arr[j]) {
         check = 0;
         printf("cap doi xung: (%d,%d)\n", arr[i],arr[j]);
      }
      j--;
   }
   if (check) {
      printf("khong co cap doi xung\n");
   }
}
int main(){
   int size;
   int *arr = NULL;
   arr = insertArray(arr, &size);
   findSymmertrical(arr, size);
   free(arr);

   return 0;
}
