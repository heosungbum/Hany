
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
    }darr;


}