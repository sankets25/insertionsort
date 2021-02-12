// Name: Sanket Manik Salunke
// StudentID: 1001764897

# include <stdio.h> 
# include <string.h> 


int main( ) 
{ 

    char **data, *temp;                                      //Intialisation & declaration
	data = (char**)malloc(7500*sizeof(char *));             //memory allocation
	temp= (char*)malloc(sizeof(char)*101);
	
	FILE *filePointer;                                     // Declare the file pointer 
	int rowcount=0,count=0;
	
	// Declare the variable for the data to be read from file 
	    char dataToBeRead[15]; 
	    
		printf("Please enter the File name to proceed :\n");
		scanf("%s", dataToBeRead);
		filePointer= fopen(dataToBeRead, "r");             // Open the existing file using fopen(),in read mode using "r" attribute 

	
		while( fgets ( temp,101, filePointer ) != NULL ) 
		{ 
		
			data[rowcount] = (char*)malloc(sizeof(char));
			
			strcpy(data[rowcount], temp);
			rowcount++;
			
		
			count += strlen(temp);
		}
		 int i;
		 for(i=0; i<rowcount; i++)
			 
			 {
				 printf("%s" , data[i]);
				 
			 }
		 		
		printf("\n%d",count); 
			
		printf("\n pointer size: %zu\ Bytes", sizeof(temp));
		
		printf("\n pointers: %d", rowcount);
		
		printf(" \nAllocate Space for Storing the  %d B", sizeof(temp) * rowcount + (count));  //to find out allocated memory size
			 
			
				
		// Closing the file using fclose() 
		//fclose(filePointer) ; 
		
		printf("\n Data successfully read from file\n"); 
		//printf("The file is now closed.") ;
		
		
		 printf("\n--------  compare by LENGTH only --------------\n");
         //insertion_sort_ptr(table, n, comp_length);
    
		insertion_sort_len(data, rowcount);
		
		printf("\n--------  compare by strcmp --------------\n");    
         //insertion_sort_ptr(table, n, strcmp);  
			insertion_sort_strcmp(data, rowcount);
         //print_data(table, n);
		 
		 printf("\n--------  compare by GREATER --------------\n");
        insertion_sort_greater(data, rowcount);  
		
		printf("\n--------  compare by LENGTH and lexicografic --------------\n");    
        insertion_sort_lexico(data, rowcount);    
        //print_data(table, n);

			free(data);                 //releasing the allocated space using free()
	}
	
	
	 // Implementation of insertion sort algorithm
	 
	 
void insertion_sort_len(char **data, int n)
{                                                               //compare by LENGTH only
	 int i,j;
	 char temp[30];
	for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && strlen(data[j-1]) > strlen(data[j]))
            {	        
                strcpy(temp ,data[j]);
                strcpy(data[j],data[j-1]);
                strcpy(data[j-1],temp);
                j--;
            }
    }
   
   for(i=0; i<n; i++)
			 
			 {
				 printf("%s" , data[i]);
				 
			 }
	
}

void insertion_sort_strcmp(char **data, int n)                     //compare by strcmp

{
	 int i,j;
	 char temp[30];
	for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && strcmp(data[j-1],data[j])>0)
            {	        
                strcpy(temp ,data[j]);
                strcpy(data[j],data[j-1]);
                strcpy(data[j-1],temp);
                j--;
            }
    }
   
   for(i=0; i<n; i++)
			 
			 {
				 printf("%s" , data[i]);
				 
			 }
	
}

void insertion_sort_greater(char **data, int n)                        //compare by greater

{
	 int i,j;
	 char temp[30];
	for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && strcmp(data[j-1],data[j])<0)
            {	        
                strcpy(temp ,data[j]);
                strcpy(data[j],data[j-1]);
                strcpy(data[j-1],temp);
                j--;
            }
    }
   
   for(i=0; i<n; i++)
			 
			 {
				 printf("%s" , data[i]);
				 
			 }
	
}

 void insertion_sort_lexico(char **data, int n)        //compare by lexicografic

{
	 int i,j;
	 char temp[30];
	for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && strlen(data[j-1]) > strlen(data[j]) && strcmp(data[j-1],data[j])<0)
            {	        
                strcpy(temp ,data[j]);
                strcpy(data[j],data[j-1]);
                strcpy(data[j-1],temp);
                j--;
            }
    }
   
   for(i=0; i<n; i++)
			 
			 {
				 printf("%s" , data[i]);
				 
			 }
	
} 

