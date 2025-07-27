#include <stdio.h>

int main(){
    int age = 18;                                     //ประกาศตัวแปรอายุ 
    float weighs = 51.5;                              //ประกาศตัวแปรน้ำหนัก เป็นทศนิยม
    char name = 'F';                                  //ประกาศตัวแปรชื่่อตัวพิมพ์ใหญ่
 
    printf("Student %c is %d years old.\n",name,age); //แสดงผลบรรทัดที่ 1
    printf("His weighs is %.1f kg.\n",weighs);        //แสดงผลบรรทัดที่ 2

    return 0;                                         // จบการทำงานของโปรแกรม

}