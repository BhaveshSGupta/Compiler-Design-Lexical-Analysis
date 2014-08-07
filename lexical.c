/*Write as program to implement lexical analysis*/
#include<stdio.h>
void main()
{
        char st[50];
        int i,a,m;
        gets(st);
        for(i=0;st[i]!='\0';i++)
                {

                        if((st[i]>='a' && st[i]<='z') || (st[m+1]>='A' && st[m+1]<='Z') )
                                {m=i;
                                        printf("\n %c",st[i]);

                                        check1:
                                        if((st[m+1]>='a' && st[m+1]<='z')||(st[m+1]>='A' && st[m+1]<='Z')
 || (st[m+1]>='0' && st[m+1]<='9'))
                                                {
                                                m=m+1;
                                                printf("%c",st[m]);
                                                goto check1;
                                                }
                                        else
                                                {
                                                printf(" is indentifer \n");
                                                i=m;
                                                }
                                }
                        else if(st[i]=='=')
                                {
                                        printf("\n %c is assignment operator \n",st[i]);
                                }
                        else if(st[i]=='*' || st[i]=='/' || st[i]=='-'|| st[i]=='+'|| st[i]=='%')
                                {
                                        printf("\n %c is arthematic operator \n",st[i]);
                                }
                        else if(st[i]>='0' && st[i]<='9')
                                { m=i;
                                        printf("\n %c",st[i]);
                                        check:
                                        if(st[m+1]>='0' && st[m+1]<='9')
                                                {
                                                m=m+1;
                                                printf("%c",st[m]);
                                                goto check;
                                                }
                                        else
                                                {
                                                printf(" is digit \n");
                                                i=m;
                                                }

                                }
                        else if(st[i]==' ')
                                {}


                        else
                                {
                                        printf("We are developing please wait uptil nxt relase");
                                }



                }
        }