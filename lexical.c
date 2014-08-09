/*Write as program to implement lexical analysis
 *Written for the first LAB of the subject Compiler Design
 *This program still analysis small line that too only with few characteristic 
 * Author@BhaveshSGupta
 *
 */
#include<stdio.h>
#include<stdlib.h>
void main()
		{
            char *string;
			int index;
    		string	= (char *) malloc(100);/*Dynamic allocation for memory management*/
			printf("Enter the String on which you need to do the Lexical analysis")
			gets(string);
            for(index=0;string[index]!='\0';index++)/*The loop to check whether the End of String or Not*/
				{
					int _temp;
					if((string[index]>='a' && string[index]<='z') || (string[_temp]>='A' && string[_temp]<='Z') )/*For Identifier analysis as a rule a identifier should always start with a letter and could consist numbers also*/
                        {
                            _temp=index;
                            printf("\n %c",string[index]);
                            check1: /*using label */
                            if((string[_temp+1]>='a' && string[_temp+1]<='z')||(string[_temp+1]>='A' && string[_temp+1]<='Z') || (string[_temp+1]>='0' && string[_temp+1]<='9'))/*To check the next letter in array is alphanumeric or not*/
                                {
                                    _temp=_temp+1;
                                    printf("%c",string[_temp]);
                                    goto check1;
                                }
                            else
                                {
                                    printf(" is Identifier \n");
                                    index=_temp;
                                }
                        }
                    else if(string[index]=='=')
                        {
                            printf("\n %c is Assignment Operator \n",string[index]);
                        }
                    else if(string[index]=='*' || string[index]=='/' || string[index]=='-'|| string[index]=='+'|| string[index]=='%')
                        {
                            printf("\n %c is Arithmetic Operator \n",string[index]);
                        }
                    else if(string[index]>='0' && string[index]<='9')
                        {
                            _temp=index;
                            printf("\n %c",string[index]);
                            check:
                            if(string[_temp+1]>='0' && string[_temp+1]<='9')
                                {
                                    _temp=_temp+1;
                                    printf("%c",string[_temp]);
                                    goto check;
                                }
                            else
                                {
                                    printf(" is Digit \n");
                                    index=_temp;
                                }

                        }
                    else if(string[index]==' ')
                        {
                        
                        }
                    else
                    {
                        printf("\n We are Developing soon there will be an update");                        
                    }



                }
		free(string);
       
    	}