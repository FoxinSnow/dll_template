#pragma once

#include <iostream>

#if defined (__GNUC__) && defined(__unix__)
	#define TEMPLATE_API
#else
	#ifdef TEMPLATE_API_EXPORTS
		#define TEMPLATE_API  __declspec(dllexport)  
	#else
		#define TEMPLATE_API  __declspec(dllimport) 
	#endif
#endif


int TEMPLATE_API print_helloworld();