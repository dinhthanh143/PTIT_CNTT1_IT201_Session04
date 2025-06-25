#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct Student {
   int id;
   char name[40];
   int age;
};
int main(){
   struct Student students[5];
   for (int i = 0; i < 5; i++) {
      students[i].id = i+1;
      printf("\nmoi nhap ten cua sinh vien thu %d:", i+1);
      fgets(students[i].name, 50, stdin);
      students[i].name[strcspn(students[i].name, "\n")] = 0;
      printf("\nmoi nhap tuoi cua sinh vien thu %d:", i+1);
      scanf("%d", &students[i].age);
      getchar();
   }
   int index;
   int check = 0;
   printf("\nmoi nhap id cua sinh vien muon tim:");
   scanf("%d", &index);
   for (int i = 0; i < 5; i++) {
      if (index == students[i].id) {
         check = 1;
      }
   }
   if (check) {
      printf("ID: %d\n", students[index-1].id );
   printf("\nTen: %s\n", students[index-1].name);
   printf("\nTuoi: %d\n", students[index-1].age);
   }else {
      printf("Sinh vien khong ton tai");
   }

   return 0;
}
