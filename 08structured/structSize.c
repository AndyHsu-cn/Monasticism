/**
 * 结构体数据类型的size并不是简单的所含各数据类型的size之和
*/
#include <stdio.h>
struct  student_st{
    int id;
    int age;
    char gender;
};


int main(void)
{
    struct student_st stu1 = {1000, 18, 'F'};
    struct student_st * pStu1 = &stu1;
    
    printf("%zd\n", sizeof(stu1.id) + sizeof(stu1.age) + sizeof(stu1.gender));
    printf("sizeof(stu1) = %zd\n", sizeof(stu1));
    printf("sizeof(pStu1) = %zd\n", sizeof(pStu1));
    return 0;
}