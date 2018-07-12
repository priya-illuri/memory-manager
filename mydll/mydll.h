#pragma once 
#ifdef MYDLL_EXPORTS  
#define MYDLL_API __declspec(dllexport)   
#else  
#define MYDLL_API __declspec(dllimport)   
#endif  

extern  MYDLL_API char* getName();

extern  MYDLL_API int getAge();
