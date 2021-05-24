#include <iostream>

#include "base.hpp"
#include "BaseFactory.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "rand.hpp"

int main(int argc, char** argv) {
	BaseFactory* expressionTree;
	Base* evaluation = expressionTree->parse(argv, argc);

	if(evaluation == nullptr) {
		cout << "Input Is Invalid." << endl;
	}
	else {
		cout << evaluation->stringify() << "=" << evaluation->evaluate() << endl;
	}
	return 0;
}
