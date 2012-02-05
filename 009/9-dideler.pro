/* The three numbers a, b, and c (a < b < c) are said to form a Pythagorean triplet if a^2 + b^2 = c^2.
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
 *
 * Some prolog predicates from Christian S. Collberg were used and modified.
 * http://www.cs.arizona.edu/~collberg/Teaching/372/2005/Html/Html-24/index.html
 *
 * ?- pythag(X,Y,Z).
 * 31875000
 * X = 200,
 * Y = 375,
 * Z = 425.
 */

pythag(A, B, C) :-
  int_triple(A, B, C),
  C*C =:= A*A + B*B,
  1000 is A + B + C,
  Product is A * B * C,
  writeln(Product), !. % Only one solution exists, do not backtrack.

% Represent S as the sum of 2 numbers (X,Y).
minus(S, S, 0).
minus(S, D1, D2) :- % S must be instantiated.
  S > 0,
  S1 is S - 1,
  minus(S1, D1, D3),
  D2 is D3 + 1.

% Generate integer triples: S = A + B + C.
int_triple(A, B, C) :-
  S = 1000,
  minus(S, A, S1), A > 0,
  minus(S1, B, C), B > A, C > B, B > 0, C > 0.
