#include <stdio.h>
#include <string.h>

// Use struct as a object or storage structure
struct Data
{
  char name[30];
  int roll;
  float chem_marks, math_marks, phy_marks;
};

int main()
{
  // Take 5 copy of Data
  struct Data data[5];
  char file[100];
  FILE *fp;

  printf("Enter 5 students details: \n");

  for (int i = 0; i < 4; i++)
  {
    printf("Student no: %d \n", i + 1);
    printf("Enter student's nick name: \n");
    scanf("%s", data[i].name);
    printf("Enter student's roll number: \n");
    scanf("%d", &data[i].roll);
    printf("Enter Math marks: \n");
    scanf("%f", &data[i].math_marks);
    printf("Enter Chemistry marks: \n");
    scanf("%f", &data[i].chem_marks);
    printf("Enter Physics marks: \n");
    scanf("%f", &data[i].phy_marks);
  }

  printf("Enter a filename to save data: \n");
  scanf("%s", file);

  char *filename = strcat(file, ".csv");

  fp = fopen(filename, "w+");
  fprintf(fp, "Student Roll, Student Name, Math, Chemistry, Physics, Percentage");

  for (int i = 0; i < 4; i++)
  {
    float percentage = (data[i].math_marks + data[i].chem_marks + data[i].phy_marks) / 300.0 * 100;
    fprintf(fp, "\n %d, %s, %f, %f, %f, %f", data[i].roll, data[i].name, data[i].math_marks, data[i].chem_marks, data[i].phy_marks, percentage);
  }

  fclose(fp);

  printf("\n %s file created", filename);
}
