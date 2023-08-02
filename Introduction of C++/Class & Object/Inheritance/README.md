## Inheritance

### Derived class syntax

            class derived-class: visibility-mode base-class
            {
                // body of derived class
            };

 ### Visibility Mode

  There are two types of visibility modes defined for the base class. They are:

  1. Public Visibility

  2. Private Visibility

Notes =>

- Default visibility mode is private.

- Public Visibility Mode: Public members of the base class becomes Public members of the derived class.

- Private Visibility Mode: Public members of the base class becomes Private members of the derived class.

- Private members are never inherited.

- Protected members of the base class becomes Protected members of the derived class.
