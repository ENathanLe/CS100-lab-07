#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <math.h>

class Pow : public Base {
    public:
	Pow(Base* op1, Base* op2) : Base(), operand1(op1), operand2(op2) {}
	std::string stringify() { return "(" + operand1->stringify() + " ** " + operand2->stringify() + ")";}
	double evaluate() {
		return pow(operand1->evaluate(), operand2->evaluate());
	}
	~Pow() {
	    if(operand1) delete operand1;
	    operand1 = nullptr;
	    if(operand2) delete operand2;
	    operand2 = nullptr;
	}
    private:
	Base* operand1;
	Base* operand2;
};

#endif
