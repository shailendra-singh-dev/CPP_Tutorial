/**
 * https://www.geeksforgeeks.org/system-design/factory-method-pattern-c-design-patterns/

    The Factory Method Pattern is a creational design pattern that lets a class delegate the responsibility of creating objects to its subclasses.

    #Advantages of Factory pattern
		Loose Coupling: Client doesn’t depend on concrete classes.
		Easy to Extend: Add new types by creating new factories.
		Cleaner Code: Object creation logic is in one place.
		Supports Polymorphism: You can treat all shapes uniformly.

	#Disadvantages of Factory pattern
		More Classes: One factory per product type increases class count.
		More Complexity: Not worth using for very simple object creation.
		Subclassing Needed: Every new type needs a new factory subclass.
	
	#When to Use
		You have multiple types of related objects to create.
		You want to hide creation logic from the client.
		You need to decide object type at runtime.
		Your object creation code may change or grow in the future.
	
	#When Not to Use
		Object creation is simple and not likely to change.
		You don’t need to hide or encapsulate object creation.
		You're building a very small or one-time-use system.

	#Real-World Use Cases
		Logger Factory: Creates different types of loggers.
		Database Connector: Creates connectors for MySQL, PostgreSQL, etc.
		UI Component Factory: Used in frameworks like Qt or JavaFX.
		Game Object Factory: Creates enemies, power-ups, etc., in games.
 */

#include <iostream>
using namespace std;

class VHalRouter {
public:
	virtual string getName() = 0;
	virtual void printInfo() = 0;
};

class HIdlVHalRouter : public VHalRouter {
public:
	string getName(){
		return "HIdlVHalRouter";
	}
	void printInfo() {
		cout << getName() << endl;
	}
};

class AIdlVHalRouter : public VHalRouter {
public:
	string getName(){
		return "AIdlVHalRouter";
	}
	void printInfo() {
		cout << getName() << endl;
	}
};


class VHalRouterFactory {
public:
	virtual VHalRouter* createVhalRouter() = 0;
};


class HIdlVHalRouterFactory {
public:
	VHalRouter* createVhalRouter() {
		return new HIdlVHalRouter();
	}
};

class AIdlVHalRouterFactory {
public:
	VHalRouter* createVhalRouter() {
		return new AIdlVHalRouter();
	}
};

int main(){

	VHalRouterFactory* vHalRouterFactory;

	vHalRouterFactory = new HIdlVHalRouterFactory();
	VHalRouter* vhalRouter = vHalRouterFactory->createVhalRouter();
	vhalRouter->printInfo();

	vHalRouterFactory = new AIdlVHalRouterFactory();
	VHalRouter* vhalRouter = vHalRouterFactory->createVhalRouter();
	vhalRouter->printInfo();
}
