/* student.c */
#include <stdio.h>
#include "student.h"

/* Source file with structure
 * StudentData
 * StudentAddress
 */

void sstudent(void)
{
    /* student is the variable of structure StudentData */
    struct StudentData student;
    
    /* Assigning the values to StudentData */
    student.stu_name = "Безирген";
    student.stu_id = 2323438;
    student.stu_age = 23;
    
    /* new structure */
    student.stuAddress.street = "ул. Ленина, д. 10, кв. 5";
    student.stuAddress.state = "Московская область";
    student.stuAddress.city = "Москва";
    student.stuAddress.country = "Russia";
    
    /* Displaying the values of struct member */
    printf("Hello, %s!\n", student.stu_name);
    printf("Student Id is: %d\n", student.stu_id);
    printf("Student Age is: %d\n", student.stu_age);
    printf("Country: %s, Region: %s, City: %s, Address: %s\n",
           student.stuAddress.country,
           student.stuAddress.state,
           student.stuAddress.city,
           student.stuAddress.street);
    printf("Goodbye!\n");
}
