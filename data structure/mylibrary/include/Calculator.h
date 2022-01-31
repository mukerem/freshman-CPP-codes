#ifndef CALCULATOR_H
#define CALCULATOR_H

template<class T>
class Calculator
{
    public:
        /** \brief this function add two numbers
         *
         * \param first number
         * \param second number
         * \return the sum
         *
         */

      T Add(T x , T y)
      {
   return x+y;
      }
   };

#endif // CALCULATOR_H
