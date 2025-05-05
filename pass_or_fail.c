// OM NAMO VENKATESHAYA
// AUTHOR  : ABHINAY
/* PROGRAM : Write a program to determine whether
a student has passed or failed. To pass, a student
 requires a total of 40% and at least 33% in each
 subject. Assume there are three subjects and take
 the marks as input from the user
 */

 #include <stdio.h>
 
 int main(){
 
    int sub_1,sub_2,sub_3; 
    float percentage;

    // talking subject marks as input from user
    printf("ENTER THE SUB_1 =====> \n");
    scanf("%d",&sub_1);

    printf("ENTER THE SUB_2 =====> \n");
    scanf("%d",&sub_2);

    printf("ENTER THE SUB_3 =====> \n");
    scanf("%d",&sub_3);

    percentage = ((sub_1+sub_2+sub_3)/300.0)*100;
    /* we have to take 300 int value as 300.0 floating value
    to get correct value 
    because a operation between int and int datatype always 
    yeilds a integer and if suppose 250/300 =0.833 so 0.833 is 
    converted into integer by cutting of  the decimal points 
    and leaves 0 as answer which is absolutely wrong to get
    our correct output */

    /* checking if user has entered invalid subject marks 
       by using logical "OR" operator */
    if( sub_1>100 || sub_1<0 ||
        sub_2>100 || sub_2<0 ||
        sub_3>100 || sub_3<0  )
        {
            printf("invalid marks! please enter the marks from (0 to 100)");
        }
        // checking if student is passed or failed
        else if(sub_1 >=33 && sub_2>=33 && sub_3>=33 && percentage>=40 )
        {
            printf("passed\n");
            printf("percentage ====> %.2f%%\n",percentage);
        }
        else 
        {
            printf("failed\n");
        }
        return 0;
    
}
         
    
    
