#include <iostream>

using std::cout;
using std::cin;
using std::endl;

typedef double *darrType;
typedef double **darr2dType;

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

    typedef class doubleArr2d{
        private:
            int leny;
        public:
            darr * d;
            doubleArr2d();
            doubleArr2d(const int lengy, const int lengx);
            void distroy();
            inline darr * retArr(){return d;}
            void print();
            doubleArr2d & operator * (doubleArr2d Iarr);
    }darr2d;
}