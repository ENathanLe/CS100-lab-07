#ifndef __BASE_FACTORY_HPP__
#define __BASE_FACTORY_HPP__

#include <stdlib.h> 
#include <string>

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
		 * equation can't be empty or contain only a single operator/operand (at least length 4)
		 * should not begin or end with an operator
		 */		
		if(length % 2 == 1 || length < 4 || !isdigit(*input[i]) || !isdigit(*input[length-1])) { return nullptr; } 
		
		//check to see that there exist no consecutive operators/operands
		for(unsigned i = 1; i < length-1; i++) {
			if((isdigit(*input[i]) && isdigit(*input[i+1])) || (!isdigit(*input[i]) && !isdigit(*input[i+1]))) {
				return nullptr;
			}
		}
		//==========================================================================================================
	
		Base* val1 = new Op(atof(input[1])); //post screen this first digit has to be an operand
		
		for(unsigned i = 2; i < length; i+=2) { //look for pairs of operator + operand to calculate
			string symbol = input[i]; //operator
			Base* val2 = new Op(atof(input[i+1]); //operand
	
			//operator idendification		
			if(symbol=="**") { val1 = new Pow(val1, val2); }
			else if(symbol=="*") { val1 = new Mult(val1, val2); }
			else if(symbol=="/") { val1 = new Div(val1, val2); }
			else if(symbol=="+") { val1 = new Add(val1, val2); }
			else if(symbol=="-") { val1 = new Sub(val1, val2); }
			else { return nullptr; } //invalid operator 
		}
		return val1;
	}
};

#endif //__BASE_FACTORY_HPP__
