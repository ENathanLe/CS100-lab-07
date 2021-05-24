#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

using namespace std;

class Add : public Base {
	private: 
		Base* p1;
		Base* p2;
	public:
		Add(Base* operand1, Base* operand2) : Base() {
			this->p1 = operand1;
			this->p2 = operand2;
		}
		
		double evaluate() {return p1->evaluate() +  p2->evaluate();}

		string stringify() {return "(" + p1->stringify() + " + " + p2->stringify() + ")";}
};

#endif
