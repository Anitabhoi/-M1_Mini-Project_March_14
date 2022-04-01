/**
 * @file HMSC.h
 * @author Anita Bhoi
 * @brief Header file for Hotel Control System with Basic Arithmetic operations
 *
 */

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>



// void setcolor(int ForgC);
// void login();
// void add();
// void list();
// void delete1();
// void search();
// void edit();
// // fopen();
// // fclose();



struct CustomerDetails   //STRUCTURE DECLARATION
{
char rnumber[10];
	char Uname[20];
	char Uaddress[25];
	char Uphonenumber[15];
	char Unationality[15];	
	char Uemail[20];
	char Uperiod[10];
	char Uarrivaldate[10];
}s;

/**
* @brief to set the current drawing color to the new color
* @return Result of setting color 
*/
void setcolor(int ForgC);

/**
* @brief Asked for Login information 
* @return Result as logged in if enterd data is correct
* @note returns login unsuccessful if login data is incorrect
*/
void login();

/**
* @brief Adds the Data into txt file and returns the Database
* @return Result of added Database
*/
void add();

/**
* @brief Reads Data from txt file and returns the database as result
* @return Returns database in list format
*/
void list();

/**
* @brief Delete data from txt file and returns the Result as deleted data
* @return Result as deleting data 
*/
void delete1();

/**
* @brief Search data from txt and returns the result 
* @return Returns database which is invoked by user
*/

void search();


/**
* @brief Edit data from text and returns the result 
* @return Returns edited database which is invoked by user
*/

void edit();


