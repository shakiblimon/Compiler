#include <stdio.h>
char str[100000];

///Declare The All Methods That Will Be Used In This Program Later.
void re1();
void re2();
void re3();
void re4();
void re5();
void re6();

int main()
{

    ///Attempt User To Give Input
    printf ("Give The String: ");

    while((gets(str)) != EOF)
    {

        ///Call The Methods One By One To Check The Validity Of The Taken String From The User.
        re1();
        re2();
        re3();
        re4();
        re5();
        re6();

        ///Attempt Again User To Give Input
        printf ("\n\nGive The String: ");
    }
    return 0;

}

///First Method To Check Validity Of The String   :   a(bc)*de
void re1()
{
    int i = 1;

    if (str[0] == 'a')
    {
        for (i = 1; ; i += 2)
        {
            if (str[i] == 'b' && str[i + 1] == 'c') { }
            else
            {
                break;
            }

        }
        if (str[i] == 'd' && str[i + 1] == 'e' && str[i+2] == '\0')
        {
            printf("\t1. a(bc)*de\t: Accepted\n");
        }
        else
        {

            printf("\t1. a(bc)*de\t: Not Accepted\n");
        }
    }
    else
    {

        printf("\t1. a(bc)*de\t: Not Accepted\n");
    }


}

///Second Method To Check Validity Of The String   :   a(bc)+de
void re2()
{
    int i = 1;

    if (str[0] == 'a' && str[1] == 'b' && str[2] == 'c'  )
    {
        for (i = 3; ; i += 2)
        {
            if (str[i] == 'b' && str[i + 1] == 'c') { }
            else
            {
                break;
            }

        }
        if (str[i] == 'd' && str[i + 1] == 'e' && str[i + 2] == '\0')
        {
            printf("\t2. a(bc)+de\t: Accepted\n");
        }
        else
        {
            printf("\t2. a(bc)+de\t: Not Accepted\n");
        }
    }
    else
    {
        printf("\t2. a(bc)+de\t: Not Accepted\n");
    }

}

///Third Method To Check Validity Of The String   :   a(bc)?de
void re3()
{
    int i = 1;

    if (str[0] == 'a' )
    {
        for (i = 1; ; i += 2)
        {
            if (str[i] == 'b' && str[i + 1] == 'c')
            {
                i += 2;
                break;
            }
            else
            {
                break;
            }

        }
        if (str[i] == 'd' && str[i + 1] == 'e' && str[i + 2] == '\0')
        {
            printf("\t3. a(bc)?de\t: Accepted\n");
        }
        else
        {
            printf("\t3. a(bc)?de\t: Not Accepted\n");
        }
    }
    else
    {
        printf("\t3. a(bc)?de\t: Not Accepted\n");
    }
}

///Fourth Method To Check Validity Of The String   :  [a-m]*
void re4()
{
    int flag = 0, i;

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] < 'a' || str[i] > 'm')
        {
            flag = 1;
            printf("\t4. [a-m]*\t: Not Accepted\n");
            break;
        }
    }
    if (flag == 0)
    {
        printf("\t4. [a-m]*\t: Accepted\n");
    }
}

///Fifth Method To Check Validity Of The String   :  [^aeiou]
void re5()
{
    int flag = 0, i;

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            flag = 1;
            printf("\t5. [^aeiou]\t: Not Accepted\n");
            break;
        }
    }
    if (flag == 0)
    {
        printf("\t5. [^aeiou]\t: Accepted\n");
    }
}

///Sixth Method To Check Validity Of The String   :  [^aeiou]{6}
void re6()
{
    int flag = 0, i;

    if (strlen(str) == 6)
    {

        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                flag = 1;
                printf("\t6. [^aeiou]{6}\t: Not Accepted\n");
                break;
            }
        }
        if (flag == 0)
        {
            printf("\t6. [^aeiou]{6}\t: Accepted\n");
        }
    }
    else
    {
        printf("\t6. [^aeiou]{6}\t: Not Accepted\n");
    }

}
