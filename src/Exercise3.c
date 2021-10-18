/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n){
	//Your codes here
	int Length = 1;
    int max = 1;
    int start = 0;
    int end = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (in_arr[i] < in_arr[i + 1])
        {
            Length++;
            if (Length > max)
            {
                max = Length;
                start = i + 2 - Length; 
                end = i + 2;
            }

        }
        else
            Length = 1;
    }
	printf("\nIncreasing");
    for (int i = start; i < end; i++)
        printf("%2d", in_arr[i]);
	

	Length = 1;
     max = 1;
     start = 0;
    end = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (in_arr[i] > in_arr[i + 1])
        {
            Length++;
            if (Length > max)
            {
                max = Length;
                start = i + 2 - Length; 
                end = i + 2;
            }

        }
        else
            Length = 1;
    }
	printf(" Decreasing");
    for (int i = start; i < end; i++)
        printf("%2d", in_arr[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
