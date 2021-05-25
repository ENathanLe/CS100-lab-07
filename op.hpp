#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base(), value(value) { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() {
		std::string truncStr = std::to_string(value);
		if(value != 0){
			std::size_t found = truncStr.find_last_not_of("0");
			if(found!=std::string::npos) truncStr.erase(found+1);  //remove any trailing 0's
			else truncStr.clear();
                        found = truncStr.find_last_not_of(".");
                        if(found!=std::string::npos) truncStr.erase(found+1);  //remove any trailing decimal point
                        else truncStr.clear();
		}else
			truncStr = "0";
		return truncStr;
	}
	~Op() = default;
    protected:
	double value;
};

#endif //__OP_HPP__
