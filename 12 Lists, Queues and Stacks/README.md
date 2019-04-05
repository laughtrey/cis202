# Polynomial Linked list
* Write a class `Polynomial` that stores a polynomial such as
```
p(x) = 5x^10 + 9x^7 - x - 10
```
as a linked list of terms. A term contains the coefficient and the power of x. For example, you would store p(x) as
```
(5,10),(9,7),(-1,1),(-10,0)
```
Supply member functions to add, multiply, and print polynomials. Supply a constructor that makes a polynomial from a single term.
For example, the polynomial p can be constructed as
```cpp
Polynomial p(Term(-10,0));
p.add(Polynomial(Term(-1, 1)));
p.add(Polynomial(Term(9, 7)));
p.add(Polynomial(Term(5, 10)));
```
Then computer p(x) * p(x).
```cpp
Polynomial q - p.multiply(p);
q.print();
```

Due April 9, 2019.
