#include <stdio.h>
int main() {
    char First_Name[30] ;                                       // Variable to store the first character of the name
    int age ;                                                   // Variable to store the age    
    float height;                                                // Variable to store the height 
    char subject[10];                                               // Variable to store the subject  
    char gradeA;                                                // Variable to store the grade symbol  
    float grade;                                                // Variable to store the grade  
                                                                                                          
    
    printf("Enter your First Name age and height):\n");          //ใส่ชื่อ นามสกุล อายุ และส่วนสูง
    scanf("%s %d %f", First_Name,&age, &height);                //รับค่าชื่อ นามสกุล อายุ และส่วนสูง

    printf("Enter your Subject, grade and symbolized:\n");      //ใส่วิชา เกรด และสัญลักษณ์เกรด
    scanf("%s %f %c", subject, &grade, &gradeA);               //รับค่าชื่อวิชา เกรด และสัญลักษณ์เกรด

    printf("%s is %d years old and %.2f centimeters tall\n", First_Name,age, height);        //แสดงผลชื่อ นามสกุล อายุ และส่วนสูง
    printf("In subject %s, %s got %.2f which is symbolized as '%c' ",subject,First_Name, grade, gradeA);  //แสดงผลวิชา เกรด และสัญลักษณ์เกรด

    return 0;     // จบการทำงานของโปรแกรม          
}