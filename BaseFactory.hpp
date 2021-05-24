#ifndef __BASE_FACTORY_HPP__
#define __BASE_FACTORY_HPP__

#include <stdlib.h> 

#include "base.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"

class BaseFactory : public Base {
	Base* parse(char** input, int length) 	{
		//===========================================initial=screening==============================================
		/* input ex: ./calculator X Y Z 
		 * length must be EVEN (ODD equation length + 1 (./calculator argument))
		 * equation can't be empty or contain only a single operator/operand
		 * should not begin or end with an operator
		 */		
		if(length % 2 == 1 || length <= 2 || !isdigit(*input[i]) || !isdigit(*input[length-1])) { return nullptr; } 
		//==========================================================================================================
		
		Base* val1 = new Op(atof(input[1])); 



	}
};

#endif //__BASE_FACTORY_HPP__
