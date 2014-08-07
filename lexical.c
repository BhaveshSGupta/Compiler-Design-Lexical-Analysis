/*Write as program to implement lexical analysis
 *Written for the first LAB of the subject Compiler Design
 * Author@bhaveshsgupta
 *
 */
#include<stdio.h>
void main()
        {
            char st[50];
            int i,_temp;
            gets(st);
            for(index=0;st[index]!='\0';index++)
                {
                    if((st[index]>='a' && st[index]<='z') || (st[_temp+1]>='A' && st[_temp+1]<='Z') )
                        {
                            _temp=index;
                            printf("\n %c",st[index]);
                            check1:
                            if((st[_temp+1]>='a' && st[_temp+1]<='z')||(st[_temp+1]>='A' && st[_temp+1]<='Z') || (st[_temp+1]>='0' && st[_temp+1]<='9'))
                                {
                                    _temp=_temp+1;
                                    printf("%c",st[_temp]);
                                    goto check1;
                                }
                            else
                                {
                                    printf(" is indentifer \n");
                                    index=_temp;
                                }
                        }
                    else if(st[index]=='=')
                        {
                            printf("\n %c is assign_ment operator \n",st[index]);
                        }
                    else if(st[index]=='*' || st[index]=='/' || st[index]=='-'|| st[index]=='+'|| st[index]=='%')
                        {
                            printf("\n %c is arthe_matic operator \n",st[index]);
                        }
                    else if(st[index]>='0' && st[index]<='9')
                        {
                            _temp=index;
                            printf("\n %c",st[index]);
                            check:
                            if(st[_temp+1]>='0' && st[_temp+1]<='9')
                                {
                                    _temp=_temp+1;
                                    printf("%c",st[_temp]);
                                    goto check;
                                }
                            else
                                {
                                    printf(" is digit \n");
                                    index=_temp;
                                }

                        }
                    else if(st[index]==' ')
                        {

                        }
                    else
                        {
                            printf("We are developing please wait uptil nxt relase");
                        }



                }
        }
