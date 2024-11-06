// #include <stdio.h>

// int is_palindrome(int num) {
//     int reversed = 0, original = num;

    // Reverse the number
//     while (num > 0) {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }

//     // Check if original and reversed are the same121
//     return original == reversed;
// }

// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (is_palindrome(number)) {
//         printf("%d is a palindrome.\n", number);
//     } else {
//         printf("%d is not a palindrome.\n", number);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int numbers[5];
//     int sum = 0;
//     float mean, median;

//     printf("Enter 5 numbers: ");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &numbers[i]);
//         sum += numbers[i];
//     }

//     mean = (float)sum / 5;

//     for (int i = 0; i < 5 - 1; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (numbers[i] > numbers[j])
//             {
//                 int temp = numbers[i];
//                 numbers[i] = numbers[j];
//                 numbers[j] = temp;
//             }
//         }
//     }

//     median = numbers[2];

//     printf("Mean: %.2f\n", mean);
//     printf("Median: %.2f\n", median);

//     return 0;
// }

//4(B) Evaluation of postfix
#include<stdio.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    char *e;
    int n1,n2,n3,num;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*e)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
    return 0;
}