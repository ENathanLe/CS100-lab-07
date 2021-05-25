#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include <math.h>

using namespace std;

class Div : public Base {
	private: 
		Base* p1;
		Base* p2;
	public:
		Div(Base* operand1, Base* operand2) : Base() {
			this->p1 = operand1;
			this->p2 = operand2;
		}
		~Div() {
		    delete p1;
		    delete p2;
		}	
		double evaluate() {return p1->evaluate() / p2->evaluate();}

		string stringify() {return "(" + p1->stringify() + " / " + p2->stringify() + ")";}
};

#endif
