#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
		int s=0,g=0,student;
   		if(gender=='b'){
   			for(student=0;student<number_of_students;student++){
   				if(student%2==0){
   					s=s+marks[student];
				   }
			   }return s;
		   }
         else if(gender=='g'){
         	for(student=0;student<number_of_students;student++){
   				if(student%2){
   					g=g+marks[student];
				   }
			   }
         	
		 }return g;
}

int main() {
    int number_of_students;
    char gender;
    int sum,student;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
