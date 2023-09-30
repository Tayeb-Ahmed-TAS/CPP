## Virtual Base Class

<img src="https://github.com/Tayeb-Ahmed-TAS/Images/blob/main/virtual%20base%20class.png" style="text-align:center" />

### Example :

        class A{
            // Class Body
        };

        class B : virtual public A{
            // Class Body
        };

        class C : virtual public A{
            // Class Body
        };

        class D : public B, public C{
            // Class Body
        };

### Need to use Virtual Base Class :

A virtual base class is needed when a derived class inherits two ( or more ) classes, both of which are derived from the same base class. Without virtual base classes, two ( or more ) copies of the common base class would exist in the final derived class. If the original base class is virtual, only one copy is present in the final derived class.
