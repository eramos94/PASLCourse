/**************************************

Authors: Edwin Ramos and Eric Santos

Description:

This program takes a size and n 
numbers as input where n = size.
the function calculating the sum 
is recursive.

Contact: 

Eric: eric.leinad92@gmail.com

Edwin: 

Copyright E&E. 2014

***************************************/

/******** Includes *********/

#include <stdlib.h>
#include <iostream>

/******** Includes *********/

using namespace std;//line that enables cout and cin

int arraySum(int[], int);//proto of recursive function for the sum of an array

/**************** Main Function ***************/

int main(){

	int array_size = 0;//declare and initialize array size variable

	cout<<"Enter the size of the array: ";//instruction MSG

	cin>>array_size;//Getting the Users Entry

	int num_array[array_size];//Allocating Array for number storage

	/******* initializing array with users numbers ***********/

	for(int i=0;i<array_size;i++){

		cout<<endl<<endl<<"Enter element "<<i+1<<":";//instruction MSG

		cin>>num_array[i];//Getting user entry

	}

	/******* initializing array with users numbers ***********/

	cout<<"The Result Is: "<<arraySum(num_array, array_size)<<endl<<endl;//Calling recursive function to display result

}

/**************** Main Function ***************/

/**************** Definition of Recursive Addition Function ***************/

int arraySum(int numbers[], int size){

	//If size == 0 you finished so return 0
	if(size == 0){

		return 0;

	}

	//other wise return the sum of the last element and whatever the sum of the array size: n-1 is
	else{

		return numbers[size-1]+arraySum(numbers, size-1);

	}

}

/**************** Definition of Recursive Addition Function ***************/