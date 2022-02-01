#include <cmath>

namespace Nash
{
    namespace Math
    {
        namespace Arithmetic
        {
            // Returns __num1 + __num2
            int Add(int __num1, int __num2)
            {
                return __num1 + __num2;
            }

            int Subtract(int __num1, int __num2)
            {
                return __num1 - __num2;
            }

            int Multiply(int __num1, int __num2)
            {
                return __num1 * __num2;
            }

            int Divide(int __num1, int __num2)
            {
                return __num1 / __num2;
            }
        }
        namespace Trigonometry
        {
            // Returns the sine of the number of radians entered
            int Sine(int __radians)
            {
                return (int)sin((double)__radians);
            }
            // Returns the cosine of the number of radians entered
            int Cosine(int __radians)
            {
                return (int)cos((double)__radians);
            }
            // Returns the tangent of the number of radians entered
            int Tangent(int __radians)
            {
                return (int)tan((double)__radians);
            }
            // Returns the arc sine of the number of radians entered
            int ArcSine(int __radians)
            {
                return (int)asin((double)__radians);
            }
            // Returns the arc cosine of the number of radians entered
            int ArcCosine(int __radians)
            {
                return (int)acos((double)__radians);
            }
            // Returns the arc tangent of the number of radians entered
            int ArcTangent(int __radians)
            {
                return (int)atan((double)__radians);
            }
            // Returns the arc tangent of the number of y/x
            int YXArcTangent(int __x, int __y)
            {
                return (int)atan2((double)__y,(double) __x);
            }
        }
        namespace BasicMath
        {
            // Return the square root of the number input
            int root(int __num)
            {
                return (int)sqrt((double)__num);
            }

            // Return the cube root of the number input
            int cube_root(int __num)
            {
                return (int)cbrt((double)__num);
            }

            // Return the input ^ n
            int to_power_of_n(int __num, int __n)
            {
                int result = __num * __num;
                for (int i = 0; i < __num - 1; i++)
                {
                    result = result * __num;   
                }
                return result;
            }

            // Returns the rounded version of the number input
            int round_num(int __num)
            {
                return (int)round((double)__num);
            }
            // Returns natural logarithm of the number input (assumes that base is e if not supplied)
            int logarithm(int __num, int __base = NULL)
            {
                if (__base == NULL)    { return (int)log((double)__num); }
                else                   { return (__num > __base - 1) ? 1 + logarithm(__num / __base, __base) : 0; }
            }
            // Returns absolute value of input (usage => value.absolute() )
            int absolute(int __num)
            {
                return (int)abs((double)__num);
            }

        }
    }
}