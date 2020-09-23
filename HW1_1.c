#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int wordcount(char* array);


int main(void) {
	char* string_array=malloc(sizeof(char)*1000);    
	
	scanf("%s",string_array);

	int j=strlen(string_array);   

	int count_1=0;	// 문자 카운터 -> /
	int count_2=0;	// 문자 카운터 -> \
	
	if (j%2==1){
		
		printf("0");		
	}
	
	else if (j==0){
		
		printf("0");
	}
	
	else if (j>=1000){
		
		printf("0");
	}
	
	else{
		

		int error_code=0;

		for (int i=0;i<j;i++){
			
			char a;
			a=string_array[i];
			if (a=='/')
			{
				++count_1;
			}
				
			else if (a=='\\')
			{
				++count_2;
			}
			

			if (count_1<count_2){
				printf("0");
				++error_code;
				break;
			}
		}
		
		if(count_1!=count_2&&error_code==0){
			
			printf("0");
		}
		
		else if(error_code==0){
			
			
			int count;
			count=wordcount(string_array);
			printf("%d",count);
			
		}
	}
	
	printf("\n");
	
	free(string_array);
	
	return 0;
}


int wordcount(char* array) {
	
	int count=0;
	size_t k=strlen(array);
	

	for(int i=0; i<k-1; i++){
		
		char s1;
		char s2;
		s1=array[i];
		s2=array[i+1];
		
		if( s1=='/' && s2=='\\'){
		   
			++count;
		}
	}

	return count;
}
