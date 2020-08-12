#include "Hany.h"

#define bigger(x1, x2) x1>x2 ? x1 : x2

ncpp::doubleArr::doubleArr(){
    len=0;
}

ncpp::doubleArr::doubleArr(int leng){
    arr=new double[leng];
}

void ncpp::doubleArr::distroy(){
    delete[] arr;
}

ncpp::doubleArr & ncpp::doubleArr::operator * (ncpp::doubleArr Iarr){
    ncpp::doubleArr re(bigger(len, Iarr.retlen()));

    int i, j1, j2;

    for(i=0; i<(bigger(len, Iarr.retlen())); i++, j1++, j2++){
        if(j1==len)j1=0;
        if(j2==Iarr.retlen())j2=0;

        re.arr[i]=arr[j1]*Iarr.arr[j2];
    }

    return re;
}

void ncpp::doubleArr::print(){
    int i;
    cout << "[";
    for(i=0; i<len; i++){
        if(i!=0){
            cout << ", ";
        }
        cout << arr[i];
    }
    cout << "]";
}