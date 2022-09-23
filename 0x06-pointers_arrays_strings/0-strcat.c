<<<<<<< HEAD
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/* iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}
=======
#include "main.h" 
  
 /** 
  * _strcat - concatenates two strings 
  * @dest: string to append to 
  * @src: string to add 
  * 
  * Return: a pointer to the resulting string 
  */ 
 char *_strcat(char *dest, char *src) 
 { 
         int i, j; 
  
         i = 0; 
         j = 0; 
  
         while (dest[i] != '\0') 
                 i++; 
  
         while (src[j] != '\0') 
         { 
                 dest[i] = src[j]; 
                 j++; 
                 i++; 
         } 
  
         dest[i] = '\0'; 
  
         return (dest); 
 }
>>>>>>> f74938abae93d2d8ccd75a73c4e38ef12220777b
