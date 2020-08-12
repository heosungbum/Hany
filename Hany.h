#include <iostream>

using std::cout;
using std::cin;
using std::endl;

typedef double dType,*darrType;
namespace ncpp{
    typedef class doubleArr{
        private:
            int len;
        public:
            darrType arr;
            doubleArr();
            doubleArr(const int leng);
            void distroy();
            doubleArr & operator * (ncpp::doubleArr Iarr);
            inline darrType retArr(){return arr;}
            inline int retlen(){return len;}
            void print();
    }darr;
}