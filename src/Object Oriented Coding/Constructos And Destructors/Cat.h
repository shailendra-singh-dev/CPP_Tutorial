/*
 * Cat.h
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#ifndef CAT_H_
#define CAT_H_

namespace Constructos_And_Destructors {
	class Cat {
	private:
		bool isHappy;

	public:
		void setIsHappy(bool isHappy);
		bool getIsHappy();
		void speak();
		Cat();
		~Cat();
	};

}

#endif /* CAT_H_ */
