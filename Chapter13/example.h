#pragma once

namespace example
{
    const int a = 10;
    class Base
    {
        
        public:
            int x = 0;
            int y = 0;
            Base() = default;
            Base(int, int);
            virtual ~Base() = default;
    };

    class Derived : public Base
    {
        private:
            double s = 10;
        public:
            Derived() = default;
            Derived(int , int, double);
            Derived(const Base &, double);
            void Print() const;
            virtual ~Derived() = default;
    };
}