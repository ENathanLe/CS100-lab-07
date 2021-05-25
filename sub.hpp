#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

using namespace std;

class Sub : public Base {
	private: 
		Base* p1;
		Base* p2;
	public:
		Sub(Base* operand1, Base* operand2) : Base() {
			this->p1 = operand1;
			this->p2 = operand2;
		}
		~Sub() {
		    if(p1) delete p1;
		    p1 = nullptr;
		    if(p2) delete p2;
		    p2 = nullptr;
		}	
		double evaluate() {return p1->evaluate() - p2->evaluate();}

		string stringify() {return "(" + p1->stringify() + " - " + p2->stringify() + ")";}
};

#endif
