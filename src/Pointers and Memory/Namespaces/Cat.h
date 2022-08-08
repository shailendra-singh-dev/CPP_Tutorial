/*
 * Cat.h
 *
 *  Created on: Apr 22, 2018
 *      Author: Shailendra
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace cat1 {
const string CAT_NAME = "SHAW";
class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

}

#endif /* CAT_H_ */
