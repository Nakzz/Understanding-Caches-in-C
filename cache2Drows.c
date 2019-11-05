///////////////////////////////////////////////////////////////////////////////
//
// Copyright 2019 Jim Skrentny
// Posting or sharing this file is prohibited, including any changes/additions.
//
///////////////////////////////////////////////////////////////////////////////
// Main File:        cache2Drows.c
// Semester:         CS 354 Fall 2019
//
// Author:           Ajmain Naqib
// Email:            naqib@wisc.edu
// CS Login:         ajmain
//
/////////////////////////// OTHER SOURCES OF HELP /////////////////////////////
//                   fully acknowledge and credit all sources of help,
//                   other than Instructors and TAs.
//
// Persons:          Identify persons by name, relationship to you, and email.
//                   Describe in detail the the ideas and help they provided.
//
// Online sources:   avoid web searches to solve your problems, but if you do
//                   search, be sure to include Web URLs and description of
//                   of any information you find.
///////////////////////////////////////////////////////////////////////////////

//#include <stdio.h>

int arr[3000][500];

int main(){
	for(int i=0; i<3000;i++){
		for(int j=0; j<500;j++){
			arr[i][j] = i+j;
//			printf("arr[%d][%d] = %d\n",i,arr[i][j]);
		}
	}
}
