#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, size;
    scanf("%d", &test_case);
    while (test_case--)
    {
        scanf("%d", &size);
        char str[size];
        scanf("%s", str);
        int pa = 0, ti = 0;
        int l = strlen(str);
        for (int i = 0; i < l; i++)
        {
            if (str[i] == 'P')
                pa++;
            else
                ti++;
        }
        if (pa > ti)
            printf("Pathaan\n");
        else if (pa < ti)
            printf("Tiger\n");
        else
            printf("Draw\n");
    }
    return 0;
}