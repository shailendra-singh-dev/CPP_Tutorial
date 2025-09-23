/**
 * https://www.geeksforgeeks.org/system-design/factory-method-pattern-c-design-patterns/

    Abstract Factory Method is a creational design pattern, it provides an interface for creating families of related or dependent objects without specifying their concrete classes.

    # Advantages of the Abstract Factory Pattern in C++ Design Patterns
        Consistency: It ensures that objects created by a factory are compatible and consistent within a family, improving the overall system's integrity.
        Flexibility: The pattern allows for the easy addition of new product families or variations without modifying existing client code.
        Encapsulation: Concrete classes are encapsulated within their respective factories, reducing dependencies and making it easier to manage changes.
    
    # Disadvantages of the Abstract Factory Pattern in C++ Design Patterns
        Complexity: Implementing the pattern can lead to a large number of classes and interfaces, potentially increasing code complexity.
        Rigidity: Modifying or extending a product family may require changes in multiple places, making the system less flexible.
        Runtime Costs: Creating objects through factories can introduce some runtime overhead, although it's usually negligible.
 */

#include <iostream>
using namespace std;

class VHalRouter {
public:
	virtual string getName() = 0;
	virtual void printInfo() = 0;
};

class HidlVHalRouter : public VHalRouter {
public:
	string getName() override {
		return "HidlVHalRouter";
	}
	void printInfo() override {
		cout << getName() << endl;
	}
};

class HaleyTekHidlVHalRouter : public HidlVHalRouter{
public:
    string getName() override {
        return "HaleyTekHidlVHalRouter";
    }
    void printInfo() override {
        cout << getName() << endl;
    }
};

class VolvoCarsHidlVHalRouter : public HidlVHalRouter{
public:
    string getName() override {
        return "VolvoCarsHidlVHalRouter";
    }
    void printInfo() override {
        cout << getName() << endl;
    }
};

class AidlVHalRouter : public VHalRouter {
public:
	string getName() override{
		return "AidlVHalRouter";
	}
	void printInfo() override {
		cout << getName() << endl;
	}
};

class HaleyTekAidlVHalRouter : public AidlVHalRouter{
public:
    string getName() override {
        return "HaleyTekAidlVHalRouter";
    }
    void printInfo() override {
        cout << getName() << endl;
    }
};

class VolvoCarsAidlVHalRouter : public AidlVHalRouter{
public:
    string getName() override {
        return "VolvoCarsAidlVHalRouter";
    }
    void printInfo() override {
        cout << getName() << endl;
    }
};


class VHalRouterFactory {
public:
	virtual VHalRouter* createHidlVhalRouter() = 0;
    virtual VHalRouter* createAidlVHalRouter() = 0;
};


class HaleyTekVHalRouterFactory : public VHalRouterFactory {
public:
	VHalRouter* createHidlVhalRouter() override{
		return new HaleyTekHidlVHalRouter();
	}
    VHalRouter* createAidlVHalRouter() override {
		return new HaleyTekAidlVHalRouter();
	}
};

class VolvoCarsVHalRouterFactory : public VHalRouterFactory {
public:
	VHalRouter* createHidlVhalRouter()  override{
		return new VolvoCarsHidlVHalRouter();
	}
    VHalRouter* createAidlVHalRouter()   override {
		return new VolvoCarsAidlVHalRouter();
	}
};

void abstract_factory_method_pattern(){

	VHalRouterFactory* vHalRouterFactory;

    vHalRouterFactory = new HaleyTekVHalRouterFactory();
    VHalRouter* vhalRouter1 = vHalRouterFactory->createHidlVhalRouter();
    vhalRouter1->printInfo();
    VHalRouter* vhalRouter2 = vHalRouterFactory->createAidlVHalRouter();
    vhalRouter2->printInfo();

    vHalRouterFactory = new VolvoCarsVHalRouterFactory();
    VHalRouter* vhalRouter3 = vHalRouterFactory->createHidlVhalRouter();
    vhalRouter3->printInfo();
    VHalRouter* vhalRouter4 = vHalRouterFactory->createAidlVHalRouter();
    vhalRouter4->printInfo();
}
