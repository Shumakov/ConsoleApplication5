#pragma once


//#define DEBUG

#define VAL 3

#define RUS  setlocale(LC_ALL, "Rus")

#define SIZE 5
#define forever   for (;;)
#define Mult(a,b) (a)*(b)
#define ERROR_MESS "Вы допустили ошибку"

#define mkstr(s) #s

#define concat(a,b) a##b


#define PR cout <<" String 1\n"\
				<< " String 2\n"\
			    << " String 3\n"

#define PR_ARR(arr, s) for(int i{}; i < s; ++i)\
							cout << arr[i] << " ";\
							cout << endl; 


