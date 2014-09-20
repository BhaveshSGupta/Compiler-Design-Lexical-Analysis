/*Write as program to implement lexical analysis
 *Written for the first LAB of the subject Compiler Design
 *This program still analysis small line that too only with few characterstic 
 * Author@BhaveshSGupta
*/
#include<stdio.h>
#include<stdlib.h>
void main()
		{
            char *String,*key;
			int index;
    		String	= (char *) malloc(100);/*Dynamic allocation for memory management*/
			printf("Enter the String on which you need to do the Lexical \n");
			gets(String);
            for(index=0;String[index]!='\0';index++)/*The loop to check whether the End of String or Not*/
				{
					int _temp,_temp1,_temp2=0;
					if((String[index]>='a' && String[index]<='z') || (String[index]>='A' && String[index]<='Z') )/*For Identifier analysis as a rule a identifier should always start with a letter and could consist numbers also*/
                        {
                            _temp=index;
							
							_temp1=index-1;
                            printf("\n %c",String[index]);
							
							while(String[_temp1+1]>='a' && String[_temp1+1]<='z')
								{
								_temp1++;
								_temp2++;
								}
                            check1: /*using label */ 
                            if((String[_temp+1]>='a' && String[_temp+1]<='z')||(String[_temp+1]>='A' && String[_temp+1]<='Z') || (String[_temp+1]>='0' && String[_temp+1]<='9'))/*To check the next letter in array is alphanumeric or not*/
                                {
                                    _temp=_temp+1;
                                    printf("%c",String[_temp]);
                                    goto check1;
                                }
                            else
                                {
                                    printf(" is Identifier \n");
                                    index=_temp;
                                }
                        }
                    else if(String[index]=='=')
                        {
							if(String[index+1]=='=')
							{
							printf("\n == is Relational Operator \n",String[index]);
							index=index+1;
							}
							else 
							printf("\n %c is Assignment Operator \n",String[index]);
                        }
                    else if(String[index]=='*' || String[index]=='/' || String[index]=='-'|| String[index]=='+'|| String[index]=='%')
                        {
							if(String[index]=='+' && String[index+1]=='+')
							{
							printf("\n ++ is Arithmetic Increment Operator \n");
							index=index+1;
							}
							else if(String[index]=='+' && String[index+1]=='=')
							{
							printf("\n += is Assignment Operator \n");
							index=index+1;
							}
							else if(String[index]=='-' && String[index+1]=='=')
							{
							printf("\n -= is Assignment Operator \n");
							index=index+1;
							}
							else if(String[index]=='*' && String[index+1]=='=')
							{
							printf("\n *= is Assignment Operator \n");
							index=index+1;
							}
							else if(String[index]=='/' && String[index+1]=='=')
							{
							printf("\n /= is Assignment Operator \n");
							index=index+1;
							}
							else if(String[index]=='%' && String[index+1]=='=')
							{
							printf("\n %= is Assignment Operator \n");
							index=index+1;
							}
							else if(String[index]=='-' && String[index+1]=='-')
							{
							printf("\n -- is Arithmetic Decrement Operator \n");
							index=index+1;
							}
							else
							printf("\n %c is Arithmetic Operator \n",String[index]);
						}
                    else if(String[index]>='0' && String[index]<='9')
                        {
                            _temp=index;
                            printf("\n %c",String[index]);
                            check:
                            if(String[_temp+1]>='0' && String[_temp+1]<='9')
                                {
                                    _temp=_temp+1;
                                    printf("%c",String[_temp]);
                                    goto check;
                                }
                            else
                                {
                                    printf(" is Digit \n");
                                    index=_temp;
                                }

                        }
                    else if(String[index]==' ')
                        {
                        
                        }
                    else if(String[index]=='^')
                        {
						if(String[index+1]=='=')
						{
						printf("\n ^=  is  bitwise exclusive OR and assignment Operator\n");
                        index=index+1;
						}
						else
						printf("\n ^  is  BitWise Operator\n");
                        }
					else if(String[index]=='~')
                        {
                        printf("\n ~  is  BitWise Operator\n");
                        }
                    else if(String[index]=='<')
                        {
							
							if(String[index+1]=='=')
								{
									printf("<= is relational Operator");
									index=index+1;
								}
							else if(String[index+1]=='<' && String[index+2]=='=')
								{
								printf("\n <<= is Left shift AND assignment operator Operator\n");
									index=index+2;
								}
							
							else if(String[index+1]=='<')
								{
									printf("<< is BitWise Left Shift Operator");
									index=index+1;
								}
							else
								printf("< is relational Operator");
								
                        }
					else if(String[index]=='>')
                        {
							if(String[index+1]=='=')
								{
									printf(">= is relational Operator");
									index=index+1;
								}
							else if(String[index+1]=='>' && String[index+2]=='=')
								{
								printf("\n >>= is Right shift AND assignment operator Operator\n");
									index=index+2;
								}
							else if(String[index+1]=='>')
								{
									printf("\n >> is BitWise Left Shift Operator\n");
									index=index+1;
								}
							else
								printf("> is relational Operator");
                        }
					else if(String[index]=='!')
                        {
						
							if(String[index+1]=='=')
							{
							printf("\n != is relational Operator");
							index=index+1;							
							}
							else
							printf(" \n ! is relational Operator\n");
                        }
					else if(String[index]=='|')
                        {
						
							if(String[index+1]=='|')
							{
							printf("\n|| is relational Operator\n");
							index=index+1;							
							}
							if(String[index+1]=='=')
							{
							printf("\n|= is bitwise inclusive OR and assignment Operator\n");
							index=index+1;							
							}
							else
							printf("\n | is BitWise Operator\n ");							
							
                        }
					else if(String[index]=='&')
                        {
						
							if(String[index+1]=='&')
							{
							
							printf("&& is relational Operator");
							index=index+1;							
							}
							else if(String[index+2]=='=')
							{
							
							printf("&= is Bitwise AND assignment operator Operator");
							index=index+1;							
							}
							else
							printf("& is BitWise Operator");							
                        }
				
					else
                    {
                        printf("\n We are Developing soon there will be an update");                        
                    }



                }
		free(String);
       
    	}