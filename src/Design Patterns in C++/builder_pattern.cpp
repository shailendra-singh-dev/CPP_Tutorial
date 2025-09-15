/**
 * https://www.geeksforgeeks.org/system-design/builder-pattern-c-design-patterns/
 * 
 * The builder pattern is defined as a creational design pattern that separates the construction of a complex object 
 * from its representation, allowing us to create different representations of an object using the same construction 
 * process. It's beneficial when an object has many optional properties or configurations.
 * 
 * # Advantages of the Builder Patterns in C++
        Complex Object Creation: It simplifies the creation of complex objects by breaking down the construction process into a series of well-defined steps. Each step focuses on a specific aspect of the object's configuration.
        Reusability: Builders can be reused to create similar objects with different configurations. This reusability can lead to more efficient and maintainable code.
        Parameter Validation: Builders can validate the parameters during the construction process, ensuring that only valid configurations are used to create objects.
   # Disadvantages of the Builder Patterns in C++
        Code Overhead: Implementing the Builder Pattern may require writing additional code for the builder classes, which can make the codebase more complex, especially for simple objects.
        Learning Curve: Developers who are not familiar with the Builder Pattern may need some time to understand its concept and how to implement it correctly.
        Potential for Incomplete Objects: If the client code forgets to call certain builder methods, it's possible to create incomplete or inconsistent objects, leading to runtime errors.
 * 
 */