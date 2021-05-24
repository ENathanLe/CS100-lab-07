#ifndef __MOCK_OP_HPP__
#define __MOCK_OP_HPP__

#include "base.hpp"

class EightOpMock : public Base {
    public:
	EightOpMock() {}

        virtual double evaluate() { return 8.0; }
        virtual std::string stringify() { return "8.0"; }
};

class SixOpMock : public Base {
    public:
	SixOpMock() {}
	
	virtual double evaluate() { return 6.0; }
	virtual std::string stringify() { return "6.0"; }
};

class NegFiveMock : public Base {
    public:
	NegFiveMock() {}
	
	virtual double evaluate() { return -5.0; }
	virtual std::string stringify() { return "-5.0"; }
};

class NegThreeMock : public Base {
    public:
	NegThreeMock() {}

	virtual double evaluate() { return -3.0; }
	virtual std::string stringify() { return "-3.0"; }
};

class ZeroOpMock : public Base {
    public:
	ZeroOpMock() {}

	virtual double evaluate() { return 0; }
	virtual std::string stringify() { return "0"; }
};
#endif //__MOCK_OP_HPP__
