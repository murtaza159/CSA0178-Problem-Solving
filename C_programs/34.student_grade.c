#include<stdio.h>
#include<string.h>

char main()
{
    struct Grades{
        char subject[20];
        char grade;
        int credit;
    } grade_array[5];

    float average,sum=0,temp, unit_count=0;


    for(int i=0;i<5;i++)
    {
        printf("Enter name of subject %d: ",i+1);
        scanf("%s",&grade_array[i].subject);

        printf("Enter grade: ");
        scanf("%s",&grade_array[i].grade);
        switch(grade_array[i].grade)
        {
        case 'A':
            temp=4.0;
            break;
        case 'B':
            temp=3.0;
            break;
        case 'C':
            temp=2.0;
            break;
        case 'D':
            temp=1.0;
            break;
        case 'F':
            temp=0.0;
            break;
        
        default:
            break;
        }
        
        printf("Enter credit(s): ");
        scanf("%d", &grade_array[i].credit);

        sum+=temp*grade_array[i].credit;
        unit_count+=grade_array[i].credit;
        
        
    }

    average=sum/unit_count;

    printf("Average Grade for the semester: %f", average, unit_count);

    

}