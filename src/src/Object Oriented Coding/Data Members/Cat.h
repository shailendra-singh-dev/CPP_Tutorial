/*
 * Cat.h
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#ifndef CAT_H_
#define CAT_H_

namespace Data_Members {
class Cat {
private:
	bool mood = false;
public:
	void makeHappy();
	void makeSad();
	void speak();
};
}

#endif /* CAT_H_ */
