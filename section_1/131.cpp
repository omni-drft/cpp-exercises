/*
*   a) 1\n1 (++ before letter first increments, then uses the value)
*
*   b) 0\n2 (++ after letter first uses the value, then increments, 
*      the && operator is used to compare values so the result in this case is 0)
*
*   c) 7 (in this case the dividing is performed on integers, so the result of 4/5 is 0, 
*      also multiplication is performed first, so we get 1 + 6 = 7)
*
*   d) There is no keyword like "and" int C++, the correct form is "&&"
*/